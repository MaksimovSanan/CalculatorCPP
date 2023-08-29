#ifndef CPP3_SMARTCALC_V2_0_MODEL_H
#define CPP3_SMARTCALC_V2_0_MODEL_H

#include <cmath>
#include <list>
#include <regex>
#include <stack>
#include <string>
#include <utility>

namespace S21 {
class Model {
 public:
  explicit Model(){};

  bool UpdateFunc(std::string aboba) noexcept;
  double Calculate(double x) const noexcept;

 protected:
  bool Convert();
  void ReplaceFunc() noexcept;
  bool Validate() const noexcept;
  int Priority(char ch) const noexcept;
  double Eval(char operation, std::stack<double> &texas) const noexcept;
  bool IsBinary(char operation) const noexcept;

 private:
  std::string Func_ = "";
  std::list<std::pair<double, char>> California_;
};
}  // namespace S21

#endif  // CPP3_SMARTCALC_V2_0_MODEL_H
