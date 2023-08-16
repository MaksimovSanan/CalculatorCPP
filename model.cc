#include "model.h"

void model::Convert() {
    std::string nums = "0123456789.";
    std::stack<char> texas;

    while(!Func_.empty()) {
        if(Func_[0] >= '0' && Func_[0] <= '9') {
            California_ += (std::to_string(std::stod(Func_)) + " ");
            size_t pos = Func_.find_first_not_of(nums);
            // std::cout << "\tpos = " << pos << std::endl;
            Func_.erase(0, pos == 0? Func_.size() : pos);
            // std::cout << "\t" << California_ << "\t" << Func_ << std::endl;
        }

        else {
            if(!texas.empty()) {
                if(Priority(Func_[0]) <= Priority(texas.top())) {
                    California_ += (texas.top() + " ");
                    texas.pop();
                }
            }
            texas.push(Func_[0]);
            // std::cout << "top texas" << texas.top() << std::endl;
            // std::cout << "DO\t" << Func_ << std::endl;
            Func_.erase(0, 1);
            // std::cout << "POSLE\t" << Func_ << std::endl;
        }
    }
    while(!texas.empty()) {
        // std::cout << "YA TUTA" << std::endl;
        // std::cout << "top texas" << texas.top() << std::endl;
        California_ += texas.top();
        California_ += " ";
        texas.pop();
    }
}

double model::Calculate(double x) {
    std::stack<double> texas;
    
    for(size_t i = 0; i != California_.size(); ++i) {
        if(California_[i] >= '0' && California_[i] <= '9') {
            double tmp = std::stod(California_[i]);
            texas.push(tmp);
            while(California_[i] != ' ') i++;
        }
        else {
            texas.push(Eval(California_[i], texas));
        }
    }
    double res = texas.top();
    texas.pop();
    return res;
}

double model::Eval(char operation, std::stack<double> &texas) {
    if(IsBinary(operation)) {
        double second = texas.top();
        texas.pop();
        double first = texas.top();
        texas.pop();
        if (operation == '+') return first + second;
        if (operation == '-') return first - second;
        if (operation == '*') return first * second;
        if (operation == '/') return first / second; 
    }
    return 0;
}

bool model::IsBinary(char operation) {
    // if(((std::string)"+-&/%^").find(operation)) return true;
    return true;
}

int model::Priority(char ch) {
    std::string operators_1 = "+-";
    std::string operators_2 = "*/%";
    std::string operators_3 = "^";
    if(operators_1.find(ch)) return 1;
    if(operators_2.find(ch)) return 2;
    if(operators_3.find(ch)) return 3;
    return 0;
}