#ifndef TRUSTACCOUNT_H_
#define TRUSTACCOUNT_H_

#include <iostream>
#include <string>
#include "SavingsAccount.h"

class TrustAccount: public SavingsAccount {

private:
	static constexpr const char *default_name = "Unnamed Trust Account";
	static constexpr double default_amount = 0.0;
	static constexpr size_t max_withdraw = 3;
	std::string name;
	double sav_balance;
	size_t num_times_withdrawn{0};
public:
	TrustAccount(const std::string name = default_name, const double amount = default_amount);

	bool deposit(const double amount) override;
	bool withdraw(const double amount) override;	
	void print(std::ostream &os) const override;

	virtual ~TrustAccount() = default;
};

#endif
