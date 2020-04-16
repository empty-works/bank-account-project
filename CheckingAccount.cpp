#include "CheckingAccount.h"

bool CheckingAccount::withdraw(const double amount) {

	if(amount > checking_fee) {
	
		double new_amt = amount - checking_fee;
		Account::withdraw(new_amt);
		return true;
	}
	else {
	
		return false;
	}
}
