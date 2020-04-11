#ifndef SAVINGSACCOUNT_H_
#define SAVINGSACCOUNT_H_

#include <string>

class SavingsAccount: public Account {

private:
	double savings_interest{0.05};
public:
	SavingsAccount();
	SavingsAccount(std::string name, double amount, double interest = 0.05);
	~SavingsAccount();

	int deposit(const double amount);
	int withdraw();	
};

#endif
