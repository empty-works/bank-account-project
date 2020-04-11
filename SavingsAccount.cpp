#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(std::string name, double amount, double interest)
	:Account{name, amount}, savings_interest{interest} {	
}

SavingsAccount::~SavingsAccount() {
}

bool SavingsAccount::deposit(const double amount) {

	Account::deposit(amount);
}


