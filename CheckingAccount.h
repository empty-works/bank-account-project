#ifndef CHECKINGACCOUNT_H_
#define CHECKINGACCOUNT_H_

#include <iostream>
#include <string>
#include "Account.h"

class CheckingAccount: public Account {

friend std::ostream &operator<<(std::ostream &os, const CheckingAccount &acc);

private:
	static constexpr const char *default_name = "Unnamed Checking Account";
	static constexpr double init_amount = 0.0;
protected:
       	static constexpr double checking_fee = 1.50;	
public:
       	CheckingAccount(std::string name = default_name, double amount = init_amount);	
	virtual bool deposit(const double amount) override; 
	virtual bool withdraw(const double amount) override;
	
	virtual ~CheckingAccount(){}	
};

#endif
