#include <iostream>
#include <string>
#include "Account.h"

Account::Account() {
}

Account::Account(std::string name, double amount) {

	this->name = name;
	this->amount = amount;	
}

Account::~Account() {
}
