#ifndef TRUSTACCOUNT_H_
#define TRUSTACCOUNT_H_

#include <iostream>
#include <string>
#include "SavingsAccount.h"

class TrustAccount: public SavingsAccount {

	friend std::ostream &operator<<(std::ostream &os, const TrustAccount &acc);

private:
	static constexpr const char *default_name = "Unnamed Trust Account";
	static constexpr double default_amount = 0.0;
	std::string name;
	double amount;
public:
	TrustAccount(const std::string name = default_name, const double amount = default_amount);

	bool deposit(const double amount);
	bool withdraw(const double amount);	
};

#endif
