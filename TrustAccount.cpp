#include <iostream>
#include <string>
#include "TrustAccount.h"

TrustAccount::TrustAccount(const std::string name, const double amount) 
	:name{name}, amount{amount} {
}

bool TrustAccount::deposit(const double amount) {

	double new_amt = amount;
	if(amount >= 5000) {
	
		new_amt += 50;
	}	
	return SavingsAccount::deposit(new_amt);
}

bool TrustAccount::withdraw(const double amount) {

	if(amount > 0) {
	
		SavingsAccount::withdraw(amount);
		return true;
	}
	else {
	
		return false;
	}
}	

std::ostream &operator<<(std::ostream &os, const TrustAccount &acc) {

	os << "[Trust Account Name: " << acc.name << " || " << "Balance: " << acc.balance << " || " << "Interest Rate: " << acc.savings_interest;
}
