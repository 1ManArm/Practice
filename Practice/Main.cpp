#include <iostream>
#include <string>
#include <vector>
#include "Client.h"


int main() {
	setlocale(LC_ALL, "Russian");

	Client cl1("�������", "�������", "������������", 1200000);
	Client cl2("�������", "�������", "������������", 1200000);
	Client cl3("�������", "�������", "������������", 1200000);
	Client cl4("�������", "�������", "������������", 1200000);
	Client cl5("�������", "�������", "������������", 1200000);

	base b1;
	b1.addClient(cl1);
	b1.addClient(cl2);
	b1.addClient(cl3);
	b1.addClient(cl4);
	b1.addClient(cl5);

	return 0;
}