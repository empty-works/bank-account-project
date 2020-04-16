#ifndef CHECKINGACCOUNT_H_
#define CHECKINGACCOUNT_H_

#include <string>
#include "Account.h"

class CheckingAccount: public Account {

private:
	static constexpr const char *default_name = "Unnamed Checking Account";
       	static constexpr double checking_fee = 1.50;	
	static constexpr double init_amount = 0.0;
public:
       	CheckingAccount(std::string name = default_name, double amount = init_amount);	
	bool withdraw(const double amount);	
};

#endif
