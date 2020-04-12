#include <iostream>
#include <string>
#include "Account.h"

std::ostream &operator<<(std::ostream &os, const Account &acc) {

	os << "Account name: " << acc.name  << " || " << "Balance: " << acc.balance;
	return os;
}

Account::Account(std::string name, double amount) {

	this->name = name;
	this->balance = amount;	
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

bool Account::withdraw(const double amount) {

	if(amount > balance) {
	
		return false;
	}
	else {
	
		balance -= amount;
		return true;
	}
}
