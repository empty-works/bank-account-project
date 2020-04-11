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

bool Account::deposit(const double amount) {

	if(amount < 0) {
	
		return false;
	}
	else {
	
		balance += amount;
		return true;
	}
}
