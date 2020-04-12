#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <iostream>
#include <string>

class Account {

	friend std::ostream &operator<<(std::ostream &os, const Account &acc);

private:
	std::string name;
	double amount;
	double balance{0.0};
protected:
	static constexpr const char *DEFAULT_NAME = "Unnamed";
	static constexpr double DEFAULT_AMOUNT = 0.0;	
public:
	Account();
	Account(std::string acc_name = DEFAULT_NAME, double initial_amt = DEFAULT_AMOUNT);
	~Account();
	
	bool deposit(const double amount);
	bool withdraw(const double amount);	
};

#endif
