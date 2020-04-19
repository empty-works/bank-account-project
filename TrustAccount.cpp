#include <iostream>
#include <string>
#include "TrustAccount.h"

TrustAccount::TrustAccount(const std::string name, const double amount) 
	:name{name}, sav_balance{amount} {
}

bool TrustAccount::deposit(const double amount) {

	double new_amt = amount;
	if(amount >= 5000) {
	
		new_amt += 50;
	}			
	return SavingsAccount::deposit(new_amt);
}

bool TrustAccount::withdraw(const double amount) {

	if(amount > 0 && 
		num_times_withdrawn <= max_withdraw && // Number of times withdrawn must not be more than 3 times.
		(amount < (balance * 0.2))) { // amount withdrawn must be less than 20% of the account's balance.
	
		SavingsAccount::withdraw(amount);
		return true;
	}
	else {
		
		std::cout << "Illegal withdrawal amount from trust account." << std::endl;	
		return false;
	}
}	

std::ostream &operator<<(std::ostream &os, const TrustAccount &acc) {

	os << "[Trust Account Name: " << acc.name << " || " << "Balance: " << acc.sav_balance << " || " << "Interest Rate: " << acc.savings_interest << "%";
	return os;
}
