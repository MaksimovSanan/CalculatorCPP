#ifndef CONTROLLER_CONTROLLER_CONTROLLER_H
#define CONTROLLER_CONTROLLER_CONTROLLER_H

#include "model.h"

class Controller {
    public:
        void Calculate(std::string &func, double x) {
            my_model.UpdateFunc(func);
            func = std::to_string(my_model.Calculate(x));
        }

    private:
        model my_model;

};

#endif