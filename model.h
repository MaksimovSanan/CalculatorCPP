#ifndef MODEL_MODEL_MODEL_H
#define MODEL_MODEL_MODEL_H

#include <string>
#include <stack>
#include <list>
#include <regex>
#include <cmath>
#include <iostream>

class model {
    public:
        model() : Func_("") {};
        model(std::string aboba) :Func_(aboba){
            ReplaceFunc();
            Convert();
        };

        void PrintCalifornia() {for(auto val:California_) std::cout << val.first << "\t" << val.second << std::endl;};

        void Convert();
        void UpdateFunc(std::string aboba) {
            Func_ = aboba;
            ReplaceFunc();
            Convert();
        };
        double Calculate(double x);

    protected:
        void ReplaceFunc();
        int Priority(char ch);
        double Eval(char operation, std::stack<double> &texas);
        bool IsBinary(char operation);

    private:
        std::string Func_;
        std::list<std::pair<double, char>> California_;
};

#endif // MODEL_MODEL_MODEL_H