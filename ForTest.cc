#include "model.h"
#include <iostream>

int main(void) {
    model test;
    test.UpdateFunc("-3+5");
    test.PrintCalifornia();
    std::cout << test.Calculate(1.0) << std::endl;

    return  0;
}