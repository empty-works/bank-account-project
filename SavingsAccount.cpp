#include <iostream>
#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(std::string name, double amount, double interest)
	:Account{name, amount}, savings_interest{interest} {	
}

SavingsAccount::~SavingsAccount() {
}

std::ostream &operator<<(std::ostream &os, const SavingsAccount &acc) {

	os << "Account name: " << acc.name << " || " << " Balance: " << acc.balance << " || " << "Interest rate: " << acc.savings_interest;
	return os;
}

bool SavingsAccount::deposit(const double amount) {

	// Add interest.
	double new_amt{amount + (amount * savings_interest)};		
	return Account::deposit(new_amt);
}

bool SavingsAccount::withdraw(const double amount) {

	return Account::withdraw(amount);
}
