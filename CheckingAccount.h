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
	virtual bool deposit(const double amount) override; 
	virtual bool withdraw(const double amount) override;

	virtual std::string print() const override {

		std::string new_string{"[Checking Account: " + name + " || " + "Balance: " + std::to_string(balance) + " || " + "Withdrawal fee: " + std::to_string(checking_fee)};
		return new_string; 
	}

	virtual ~CheckingAccount(){}	
};

#endif
