#ifndef MODEL_MODEL_MODEL_H
#define MODEL_MODEL_MODEL_H

#include <string>
#include <stack>
#include <iostream>

class model {
    public:
        model() :Func_(""), California_("") {}
        model(std::string aboba) :Func_(aboba), California_("") {}
        void ToPolish(std::string func) {
            Func_ = func;

        }

        void Convert() {
            std::string nums = "0123456789.";
            

            std::stack<char> texas;

            while(!Func_.empty()) {
                std::cout << "YA TUT \t" << Func_[0] << std::endl;

                if(Func_[0] >= '0' && Func_[0] <= '9') {
                    California_ += (std::to_string(std::stod(Func_)) + " ");
                    size_t pos = Func_.find_first_not_of(nums);
                    // std::cout << "\tpos = " << pos << std::endl;
                    Func_.erase(0, pos == 0? Func_.size() : pos);
                    std::cout << "\t" << California_ << "\t" << Func_ << std::endl;
                }

                else {
                    if(!texas.empty()) {
                        if(priority(Func_[0]) <= priority(texas.top())) {
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
                std::cout << "YA TUTA" << std::endl;
                std::cout << "top texas" << texas.top() << std::endl;
                California_ += texas.top();
                California_ += " ";
                texas.pop();

            }
            std::cout << "\t" << California_ << "\t" << Func_ << std::endl;
        }

    protected:
        int priority(char ch) {
            std::string operators_1 = "+-";
            std::string operators_2 = "*/%";
            std::string operators_3 = "^";
            if(operators_1.find(ch)) return 1;
            if(operators_2.find(ch)) return 2;
            if(operators_3.find(ch)) return 3;
            return 0;
        }

    private:
        std::string Func_;
        std::string California_;
        // std::stack res;
};

#endif // MODEL_MODEL_MODEL_H