#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <iostream>
#include <string>

class Account {

private:
	double amount{DEFAULT_AMOUNT};
protected:
	static constexpr const std::string DEFAULT_NAME{"Unnamed"};
	static constexpr double DEFAULT_AMOUNT{0.0};	
public:
	Account();
	~Account();
	
	int deposit(const size_t amount);
	int withdraw();	
};

#endif
