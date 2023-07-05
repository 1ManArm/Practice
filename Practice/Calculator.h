#ifndef _CALCULATOR_H_
#define _CALCULATOR_H_
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

class Calculator {
private:
	double _a, _b;
	std::string _prompt;
public:
	Calculator();
	Calculator(double a, std::string prompt, double b);
	double result();
};

#endif