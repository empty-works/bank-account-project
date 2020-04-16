#ifndef CHECKINGACCOUNT_H_
#define CHECKINGACCOUNT_H_

#include "Account.h"

class CheckingAccount: public Account {

private:
	static constexpr const char *default_name = "Unnamed Checking Account";
       	static constexpr double checking_fee = 1.50;	
public:
	 
	bool withdraw(const double amount);	
};

#endif
