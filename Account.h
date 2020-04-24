#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <iostream>
#include <string>
#include "I_Printable.h"

class Account: public I_Printable {


protected:
	std::string name;
	double balance{0.0};
private:
	static constexpr const char *DEFAULT_NAME = "Unnamed account";
	static constexpr double DEFAULT_AMOUNT = 0.0;	
public:
	Account(std::string acc_name = DEFAULT_NAME, double initial_amt = DEFAULT_AMOUNT);
	
	virtual bool deposit(const double amount) = 0;
	virtual bool withdraw(const double amount) = 0;
	virtual std::string print() const = 0;

	virtual void print(std::ostream &os) const override {

		os << print();		
	}


	virtual ~Account(){};

	std::string get_name() const {return name;}
	double get_balance() const {return balance;}
};

#endif
