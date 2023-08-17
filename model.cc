#include "model.h"

void model::Convert() {
    std::string nums = "0123456789.";
    std::stack<char> texas;
    bool new_line = true;

    while(!Func_.empty()) {
        if(Func_[0] == ' ') {
            Func_.erase(0, 1);
        }
        else if(Func_[0] == '-' && new_line) Func_[0] = '~';
        else if(Func_[0] >= '0' && Func_[0] <= '9') {
            California_.push_back(std::make_pair(std::stod(Func_), '?'));
            size_t pos = Func_.find_first_not_of(nums);
            Func_.erase(0, pos == 0? Func_.size() : pos);
            new_line = false;
        }
        else if (Func_[0] == '(') {
            texas.push(Func_[0]);
            Func_.erase(0, 1);
            new_line = true;
        }
        else if(Func_[0] == ')') {
            while(texas.top() != '(' && !texas.empty()) {
                California_.push_back(std::make_pair(0, texas.top()));
                texas.pop();
            }
            if(!texas.empty()) texas.pop();
            else {
                California_.clear();
                return; // I NEED THIS
            }
            Func_.erase(0, 1);
            new_line = false;
        }
        else {
            if(Func_[0] == '@') Func_.erase(0, 1);
            if(!texas.empty()) {
                if(Priority(Func_[0]) <= Priority(texas.top())) {
                    California_.push_back(std::make_pair(0, texas.top()));
                    texas.pop();
                }
            }
            texas.push(Func_[0]);
            Func_.erase(0, 1);
            new_line = false;
        }
    }
    while(!texas.empty()) {
        California_.push_back(std::make_pair(0, texas.top()));
        texas.pop();
    }
}

double model::Calculate(double x) {
    std::stack<double> texas;
    
    for(auto val : California_) {
        if(val.second == '?') {
            texas.push(val.first);
        }
        else {
            texas.push(Eval(val.second, texas));
        }
    }
    double res = texas.top();
    texas.pop();
    return res;
}

void model::ReplaceFunc() {
    Func_ = std::regex_replace(Func_, std::regex("sin", std::regex_constants::icase), "@1");
    Func_ = std::regex_replace(Func_, std::regex("cos", std::regex_constants::icase), "@2");
    Func_ = std::regex_replace(Func_, std::regex("tan", std::regex_constants::icase), "@3");
    Func_ = std::regex_replace(Func_, std::regex("Asin", std::regex_constants::icase), "@4");
    Func_ = std::regex_replace(Func_, std::regex("Acos", std::regex_constants::icase), "@5");
    Func_ = std::regex_replace(Func_, std::regex("Atan", std::regex_constants::icase), "@6");
    Func_ = std::regex_replace(Func_, std::regex("ln", std::regex_constants::icase), "@7");
    Func_ = std::regex_replace(Func_, std::regex("log", std::regex_constants::icase), "@8");
    Func_ = std::regex_replace(Func_, std::regex("sqrt", std::regex_constants::icase), "@9");
    Func_ = std::regex_replace(Func_, std::regex("mod", std::regex_constants::icase), "%");
}

int model::Priority(char ch) {
    std::string operators_1 = "+-";
    std::string operators_2 = "*/%";
    std::string operators_3 = "^";
    std::string operators_4 = "~123456789";
    if(operators_1.find(ch) != std::string::npos) return 1;
    if(operators_2.find(ch)  != std::string::npos) return 2;
    if(operators_3.find(ch)  != std::string::npos) return 3;
    if(operators_4.find(ch)  != std::string::npos) return 4;
    return 0;

}
bool model::IsBinary(char operation) {
    std::string operators_binary = "+-*/%^";
    if(operators_binary.find(operation) != std::string::npos) return true;
    return false;
}

double model::Eval(char operation, std::stack<double> &texas) {
    double second = texas.top();
    texas.pop();
    if(IsBinary(operation)) {
        double first = texas.top();
        texas.pop();
        if (operation == '+') return first + second;
        if (operation == '-') return first - second;
        if (operation == '*') return first * second;
        if (operation == '/') return first / second;
        if (operation == '%') return std::fmod(first, second);
        if (operation == '^') return std::pow(first,second);
    }
    else {
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
    return 0;
}