#pragma once
#include <iostream>
#include <string>
#include <vector>

class Client {
private:
	std::string _fname;
	std::string _lname;
	std::string _address;
	uint16_t _status;
	long long _bill;
	std::vector<Client> _base;
	int _count = _base.size();
	static std::vector<Client> _onlineBase;
public:
	Client();

	Client(std::string fname, std::string lname, std::string address, long long bill);

	Client(Client* cl);
	
	~Client();

	uint16_t getStatus();

	void showData();

};

class base {
private:
	std::vector<Client> _base{ 0 };
	static std::vector<Client> _onlineBase;
	int _count{ 0 };
public:
	void addClient(Client cl);
	/*void checkOnline(std::vector<Client> vec);*/
	
};