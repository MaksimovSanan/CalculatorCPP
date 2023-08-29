#ifndef CPP3_SMARTCALC_V2_0_CONTROLLER_H
#define CPP3_SMARTCALC_V2_0_CONTROLLER_H

#include <iomanip>
#include <sstream>
#include <vector>

#include "model.h"

namespace S21 {
class Controller {
 public:
  explicit Controller(const Model &model) : model_(model) {}

  void Calculate(std::string &func, double x) {
    if (!func.empty()) {
      if (!model_.UpdateFunc(func))
        func = "ERROR";
      else {
        std::ostringstream stream;
        stream << std::fixed << std::setprecision(7) << model_.Calculate(x);
        func = (stream.str() != "nan") ? stream.str() : "ERROR";
      }
    }
  }

  void GiveData(std::vector<std::pair<double, double>> &data, std::string func,
                double StartX, double EndX, double step) {
    if (!func.empty()) {
      if (!model_.UpdateFunc(func))
        func = "ERROR";
      else {
        for (; StartX < EndX; StartX += step) {
          data.push_back(std::make_pair(StartX, model_.Calculate(StartX)));
        }
      }
    }
  }

 private:
  Model model_;
};
}  // namespace S21
#endif  // CPP3_SMARTCALC_V2_0_CONTROLLER_H
