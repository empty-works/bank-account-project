#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(std::string name, double amount, double interest)
	:Account{name, amount}, savings_interest{interest} {

	
}

SavingsAccount::~SavingsAccount() {
}
