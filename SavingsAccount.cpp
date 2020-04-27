#include <iostream>
#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(std::string name, double amount, double interest)
	:Account{name, amount}, savings_interest{interest} {	
}

bool SavingsAccount::deposit(const double amount) {

	// Add interest.
	double new_amt{amount + (amount * (savings_interest/100))};		
	return Account::deposit(new_amt);
}

bool SavingsAccount::withdraw(const double amount) {

	return Account::withdraw(amount);
}

void SavingsAccount::print(std::ostream &os) const {

	os.precision(2);
	os << std::fixed;
	os << "[Savings account name: " << name << " || " << " Balance: " << balance << " || " << "Interest rate: " << savings_interest << "%]";
}	
