#include "model.h"
#include <iostream>

int main(void) {
    model test;
    test.UpdateFunc("33.5+76.5");
    std::cout << test.GetCalifornia() << std::endl;
    std::cout << test.Calculate((double)1.0) << std::endl;

    return  0;
}