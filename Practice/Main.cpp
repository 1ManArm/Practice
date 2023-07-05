#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include "Client.h"
#include "Calculator.h"


int main() {
	setlocale(LC_ALL, "Russian");

	//Задание 1
	Client cl1("Максим", "Шендерович", "Санкт-Петербург", 1060000);
	Client cl2("Анатолий", "Пахомов", "Оренбург", 3200000);
	Client cl3("Николай", "Савельев", "Сыктывкар", 2700000);
	Client cl4("Николай", "Оленьев", "Екатеринбург", 1200000);
	Client cl5("Феофан", "Федоров", "Пушкин", 900000);

	base b1;
	b1.addClient(cl1);
	b1.addClient(cl2);
	b1.addClient(cl3);
	b1.addClient(cl4);
	b1.addClient(cl5);

	//Задание 2
	double a, b;
	std::string prompt;
	std::cout << "Введите действие калькулятора -> ";
	std::cin >> a >> prompt >> b;
	Calculator calc(a, prompt, b);
	calc.result();
	std::cin >> a;
	return 0;
}