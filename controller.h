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

    private:
        model my_model;

};

#endif
