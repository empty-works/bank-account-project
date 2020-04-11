#ifndef SAVINGSACCOUNT_H_
#define SAVINGSACCOUNT_H_

#include <string>
#include "Account.h"

class SavingsAccount: public Account {

private:
	static constexpr const char *default_name = "Unnamed Savings Account";
	static constexpr double default_amount = 0.0;
	static constexpr double default_interest = 0.0;
protected:
	double savings_interest;
public:
	SavingsAccount(std::string name = default_name, double amount = default_amount, double interest = default_interest);
	~SavingsAccount();

	bool deposit(const double amount);
	bool withdraw(const double amount);	
};

#endif
