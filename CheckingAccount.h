#ifndef CHECKINGACCOUNT_H_
#define CHECKINGACCOUNT_H_

#include <iostream>
#include <string>
#include "Account.h"

class CheckingAccount: public Account {

private:
	static constexpr const char *default_name = "Unnamed Checking Account";
	static constexpr double init_amount = 0.0;
protected:
       	static constexpr double checking_fee = 1.50;	
public:
       	CheckingAccount(std::string name = default_name, double amount = init_amount);	
	bool deposit(const double amount) override; 
	bool withdraw(const double amount) override;
	void print(std::ostream &os) const override;

	virtual ~CheckingAccount() = default;	
};

#endif
