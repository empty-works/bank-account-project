#include "TrustAccount.h"

bool TrustAccount::deposit(const double amount) {

	double new_amt = amount;
	if(amount >= 5000) {
	
		new_amt += 50;
	}	
	return SavingsAccount::deposit(new_amt);
}	
