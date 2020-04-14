#include <iostream>
#include <string>
#include "Account.h"

std::ostream &operator<<(std::ostream &os, const Account &acc) {
	
	
	os << "Account name: " << acc.name  << " || " << "Balance: " << acc.balance;
	return os;
}

Account::Account(std::string name, double amount)
	:name{name}, balance{amount} {
}

bool Account::deposit(const double amount) {

	if(amount <= 0) {
	
		return false;
	}
	else {
		std::cout << "Balance before deposit: $" << balance << std::endl;	
		balance += amount;
		std::cout << "Balance after deposit: $" << balance << std::endl;
		return true;
	}
}

bool Account::withdraw(const double amount) {

	if(amount >= balance) {
	
		return false;
	}
	else {
	
		balance -= amount;
		return true;
	}
}
