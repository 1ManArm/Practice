#include "Calculator.h"

Calculator::Calculator() {}

Calculator::Calculator(double a, std::string prompt, double b) :_a(a), _prompt(prompt), _b(b) {}
double Calculator::result(){
    if (_prompt == "+") {
        std::cout << _a + _b;
    }

    if (_prompt == "-") {
        std::cout << _a - _b;
    }

    if (_prompt == "*") {
        std::cout << _a * _b;
    }

    if (_prompt == "/") {
        if (_b == 0) {
            std::cout << "Error!";
            return 0;
        }
        std::cout << _a / _b;
    }
}





