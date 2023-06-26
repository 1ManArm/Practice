#include <iostream>
#include <string>
#include <vector>
#include "Client.h"


int main() {
	setlocale(LC_ALL, "Russian");

	Client cl1("Николай", "Федоров", "Екатеринбург", 1200000);
	Client cl2("Николай", "Федоров", "Екатеринбург", 1200000);
	Client cl3("Николай", "Федоров", "Екатеринбург", 1200000);
	Client cl4("Николай", "Федоров", "Екатеринбург", 1200000);
	Client cl5("Николай", "Федоров", "Екатеринбург", 1200000);

	base b1;
	b1.addClient(cl1);
	b1.addClient(cl2);
	b1.addClient(cl3);
	b1.addClient(cl4);
	b1.addClient(cl5);

	return 0;
}