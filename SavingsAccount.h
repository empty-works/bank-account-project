#ifndef SAVINGSACCOUNT_H_
#define SAVINGSACCOUNT_H_

#include <string>
#include "Account.h"

class SavingsAccount: public Account {

protected:
	double savings_interest;
public:
	SavingsAccount(std::string name, double amount, double interest = 0.05);
	~SavingsAccount();

	int deposit(const double amount);
	int withdraw();	
};

#endif
