#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include "Client.h"
#include "Calculator.h"


int main() {
	setlocale(LC_ALL, "Russian");

	//������� 1
	Client cl1("������", "����������", "�����-���������", 1060000);
	Client cl2("��������", "�������", "��������", 3200000);
	Client cl3("�������", "��������", "���������", 2700000);
	Client cl4("�������", "�������", "������������", 1200000);
	Client cl5("������", "�������", "������", 900000);

	base b1;
	b1.addClient(cl1);
	b1.addClient(cl2);
	b1.addClient(cl3);
	b1.addClient(cl4);
	b1.addClient(cl5);

	//������� 2
	double a, b;
	std::string prompt;
	std::cout << "������� �������� ������������ -> ";
	std::cin >> a >> prompt >> b;
	Calculator calc(a, prompt, b);
	calc.result();
	std::cin >> a;
	return 0;
}