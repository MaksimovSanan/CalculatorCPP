#include "model.h"

namespace S21 {
bool Model::Convert() {
  bool status = true;
  bool NewLine = true;
  bool WasDigit = false;
  std::string nums = "0123456789.";
  std::stack<char> texas;

  while (!Func_.empty()) {
    if (Func_[0] == ' ') {
      Func_.erase(0, 1);
    } else if (Func_[0] == 'x' || Func_[0] == 'X') {
      if (!WasDigit) {
        California_.push_back(std::make_pair('0', 'x'));
        Func_.erase(0, 1);
        NewLine = false;
        WasDigit = true;
      } else {
        California_.clear();
        return false;
      }
    } else if (Func_[0] == '-' && NewLine) {
      Func_[0] = '~';
    } else if (Func_[0] == '+' && NewLine) {
      Func_.erase(0, 1);
    } else if (Func_[0] >= '0' && Func_[0] <= '9') {
      if (!WasDigit) {
        California_.push_back(std::make_pair(std::stod(Func_), '?'));
        size_t pos = Func_.find_first_not_of(nums);
        Func_.erase(0, pos == 0 ? Func_.size() : pos);
        NewLine = false;
        WasDigit = true;
      } else {
        California_.clear();
        return false;
      }
    } else if (Func_[0] == '(') {
      texas.push(Func_[0]);
      Func_.erase(0, 1);
      NewLine = true;
      WasDigit = false;
    } else if (Func_[0] == ')') {
      while (!texas.empty() && texas.top() != '(') {
        California_.push_back(std::make_pair(0, texas.top()));
        texas.pop();
      }
      if (!texas.empty()) {
        texas.pop();
      } else {
        California_.clear();
        return false;
      }
      Func_.erase(0, 1);
      NewLine = false;
      WasDigit = true;
    } else {
      if (Func_[0] == '@') Func_.erase(0, 1);
      while (!texas.empty() && Priority(Func_[0]) <= Priority(texas.top()) &&
             !(Func_[0] == '^' && texas.top() == '^')) {
        California_.push_back(std::make_pair(0, texas.top()));
        texas.pop();
      }
      texas.push(Func_[0]);
      Func_.erase(0, 1);
      NewLine = true;
      WasDigit = false;
    }
  }
  while (!texas.empty()) {
    California_.push_back(std::make_pair(0, texas.top()));
    texas.pop();
  }
  return status;
}

bool Model::UpdateFunc(std::string func) noexcept {
  California_.clear();
  if (func != Func_) {
    Func_ = func;
    ReplaceFunc();
    if (!Validate()) return false;
    if (!Convert()) return false;
  }
  return true;
};

double Model::Calculate(double x) const noexcept {
  std::stack<double> texas;
  for (auto val : California_) {
    if (val.second == '?') {
      texas.push(val.first);
    } else {
      if (val.second == 'x') {
        texas.push(x);
      } else {
        double tmp = Eval(val.second, texas);
        if (tmp != tmp)
          return NAN;
        else
          texas.push(tmp);
      }
    }
  }
  double res = NAN;
  if (!texas.empty()) {
    res = texas.top();
    texas.pop();
    if (!texas.empty()) return NAN;
  }
  return res;
}

void Model::ReplaceFunc() noexcept {
  Func_ = std::regex_replace(
      Func_, std::regex("Asin", std::regex_constants::icase), "@4");
  Func_ = std::regex_replace(
      Func_, std::regex("Acos", std::regex_constants::icase), "@5");
  Func_ = std::regex_replace(
      Func_, std::regex("Atan", std::regex_constants::icase), "@6");
  Func_ = std::regex_replace(
      Func_, std::regex("sin", std::regex_constants::icase), "@1");
  Func_ = std::regex_replace(
      Func_, std::regex("cos", std::regex_constants::icase), "@2");
  Func_ = std::regex_replace(
      Func_, std::regex("tan", std::regex_constants::icase), "@3");
  Func_ = std::regex_replace(
      Func_, std::regex("ln", std::regex_constants::icase), "@7");
  Func_ = std::regex_replace(
      Func_, std::regex("log", std::regex_constants::icase), "@8");
  Func_ = std::regex_replace(
      Func_, std::regex("sqrt", std::regex_constants::icase), "@9");
  Func_ = std::regex_replace(
      Func_, std::regex("mod", std::regex_constants::icase), "%");
  Func_ = std::regex_replace(
      Func_, std::regex("e", std::regex_constants::icase), "*10^");
}

bool Model::Validate() const noexcept {
  bool result = true;
  if (Func_.size() > 255) result = false;
  if (std::regex_match(Func_, std::regex(".*\\d+\\.\\d+\\..*"))) result = false;
  if (Func_.find_first_not_of("0123456789./*+-%^@()~x ") != std::string::npos)
    result = false;
  return result;
}

int Model::Priority(char ch) const noexcept {
  std::string operators_1 = "+-";
  std::string operators_2 = "*/%";
  std::string operators_3 = "^";
  std::string operators_4 = "~";
  std::string operators_5 = "123456789";
  if (operators_1.find(ch) != std::string::npos) return 1;
  if (operators_2.find(ch) != std::string::npos) return 2;
  if (operators_3.find(ch) != std::string::npos) return 3;
  if (operators_4.find(ch) != std::string::npos) return 4;
  if (operators_5.find(ch) != std::string::npos) return 5;
  return 0;
}
bool Model::IsBinary(char operation) const noexcept {
  std::string operators_binary = "+-*/%^";
  if (operators_binary.find(operation) != std::string::npos) return true;
  return false;
}

double Model::Eval(char operation, std::stack<double> &texas) const noexcept {
  double second = 0;
  if (!texas.empty())
    second = texas.top();
  else
    return NAN;
  texas.pop();
  if (IsBinary(operation)) {
    double first = 0;
    if (!texas.empty())
      first = texas.top();
    else
      return NAN;
    texas.pop();
    if (operation == '+') return first + second;
    if (operation == '-') return first - second;
    if (operation == '*') return first * second;
    if (operation == '/') return first / second;
    if (operation == '%') return std::fmod(first, second);
    if (operation == '^') return std::pow(first, second);
  } else {
    if (operation == '~') return second * -1;
    if (operation == '1') return std::sin(second);
    if (operation == '2') return std::cos(second);
    if (operation == '3') return std::tan(second);
    if (operation == '4') return std::asin(second);
    if (operation == '5') return std::acos(second);
    if (operation == '6') return std::atan(second);
    if (operation == '7') return std::log(second);
    if (operation == '8') return std::log10(second);
    if (operation == '9') return std::sqrt(second);
  }
  return NAN;
}
}  // namespace S21
