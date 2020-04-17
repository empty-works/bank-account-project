#include <iostream>
#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(std::string name, double amount)
	:Account{name, amount} {
}

bool CheckingAccount::withdraw(const double amount) {

	if(amount > checking_fee) {
	
		double new_amt = amount - checking_fee;
		Account::withdraw(new_amt);
		return true;
	}
	else {
		
		std::cout << "Error: amount to withdraw is less than the checking fee." << std::endl;	
		return false;
	}
}

// Need friend method because friendship is not inherited.
std::ostream &operator<<(std::ostream &os, const CheckingAccount &acc) {

	os << "[Checking Account: " << acc.name << " || " << "Balance: " << acc.balance << " || " << "Withdrawal fee: " << acc.checking_fee;
       return os;	
}
