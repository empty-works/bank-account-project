#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <iostream>
#include <string>

class Account {

private:
	std::string name{DEFAULT_NAME};
	double amount{DEFAULT_AMOUNT};
protected:
	static constexpr const char *DEFAULT_NAME = "Unnamed";
	static constexpr double DEFAULT_AMOUNT = 0.0;	
public:
	Account();
	Account(std::string acc_name = DEFAULT_NAME, double initial_amt = DEFAULT_AMOUNT);
	~Account();
	
	bool deposit(const double amount);
	bool withdraw();	
};

#endif
