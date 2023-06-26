#include "Client.h"

Client::Client(){
	_fname = "none";
	_lname = "none";
	_address = "none";
	_bill = 0;
	_status = 0;
}

Client::Client(std::string fname, std::string lname, std::string address, long long bill){
	_fname = fname;
	_lname = lname;
	_address = address;
	_bill = bill;
}

Client::Client(Client* cl){
	this->_fname = cl->_fname;
	this->_lname = cl->_lname;
	this->_address = cl->_address;
	this->_bill = cl->_bill;
}

Client::~Client(){
	delete(this);
}

uint16_t Client::getStatus(){
	return _status;
}

void Client::showData(){
	std::cout << "Имя:     " << _fname << std::endl;
	std::cout << "Фамилия: " << _lname << std::endl;
	std::cout << "Адрес:   " << _address << std::endl;
	std::cout << "Счет:    " << _bill << std::endl;
	std::cout << "Статус:  " << _status << std::endl;
	std::cout << std::endl;
}



//void base::checkOnline(std::vector<Client> vec){
//	for(auto i = vec.begin();i < vec.end(); i++)
//		if (i->getStatus() == 1) {
//			_onlineBase.push_back(Client(*i));
//		}
//		else {
//			continue;
//		}
//}

void base::addClient(Client cl){
	_base.push_back(cl);
	_count++;
}

