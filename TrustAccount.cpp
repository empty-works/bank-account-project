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
