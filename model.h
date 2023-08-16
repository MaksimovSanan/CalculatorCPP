#ifndef MODEL_MODEL_MODEL_H
#define MODEL_MODEL_MODEL_H

#include <string>
#include <stack>

class model {
    public:
        model() :Func_(""), California_("") {};
        model(std::string aboba) :Func_(aboba), California_("") {};

        std::string GetCalifornia() {return California_;};

        void Convert();
        void UpdateFunc(std::string aboba) {
            Func_ = aboba;
            Convert();
        };
        double Calculate(double x);

    protected:
        int Priority(char ch);
        double Eval(char operation, std::stack<double> &texas);
        bool IsBinary(char operation);

    private:
        std::string Func_;
        std::string California_;
};

#endif // MODEL_MODEL_MODEL_H