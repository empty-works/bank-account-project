#include <iostream>
#include <string>
#include "Account.h"

Account::Account(std::string name, double amount)
	:name{name}, balance{amount} {
}

bool Account::deposit(const double amount) {

	if(amount <= 0) {
	
		return false;
	}
	else {
		balance += amount;
		return true;
	}
}

bool Account::withdraw(const double amount) {

	if(balance - amount >= 0) {
	
		balance -= amount;
		return true;
	}
	else {
	
		return false;
	}
}

void Account::print(std::ostream &os) const {

	os.precision(2);
	os << std::fixed;
	os << "[Account: " << name << " || " << "Balance: " << balance << "]";
}
