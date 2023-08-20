#ifndef CONTROLLER_CONTROLLER_CONTROLLER_H
#define CONTROLLER_CONTROLLER_CONTROLLER_H

#include "model.h"
#include <vector>

class Controller {
    public:

    Controller(model model): my_model(model) {}

    void Calculate(std::string &func, double x) {
            my_model.UpdateFunc(func);
            func = std::to_string(my_model.Calculate(x));
    }

    void GiveData(std::vector<std::pair<double,double>> &data, std::string func, double StartX, double EndX, double step) {
        my_model.UpdateFunc(func);
        for (; StartX < EndX; StartX += step){
            data.push_back(std::make_pair(StartX, my_model.Calculate(StartX)));
        }
    }

    private:
        model my_model;

};

#endif
