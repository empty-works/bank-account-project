#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <iostream>
#include <string>

class Account {


protected:
	std::string name;
	double balance{0.0};
private:
	static constexpr const char *DEFAULT_NAME = "Unnamed account";
	static constexpr double DEFAULT_AMOUNT = 0.0;	
public:
	Account(std::string acc_name = DEFAULT_NAME, double initial_amt = DEFAULT_AMOUNT);
	
	bool deposit(const double amount);
	bool withdraw(const double amount);

	std::string get_name() const {return name;}
	double get_balance() const {return balance;}

	friend std::ostream &operator<<(std::ostream &os, const Account &acc);
};

#endif
