#include <iostream>
#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(std::string name, double amount)
	:Account{name, amount} {
}


bool CheckingAccount::deposit(const double amount) {

	return Account::deposit(amount);	
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

void CheckingAccount::print(std::ostream &os) const {

	os.precision(2);
	os << std::fixed;
	os << "[Checking Account: " << name << " || " << "Balance: " << balance << " || " << "Withdrawal fee: " << checking_fee;
}
