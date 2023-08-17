#include "controller.h"
#include <iostream>

int main(void) {
    // model test;
    // test.UpdateFunc("-3+5");
    // test.PrintCalifornia();
    // std::cout << test.Calculate(1.0) << std::endl;

    Controller test;
    std::string xxx = "-3+5";
    std::cout << xxx << std::endl;
    test.Calculate(xxx, 10000000);
    std::cout << xxx << std::endl;

    return  0;
}