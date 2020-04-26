#include <iostream>
#include "AccountUtil.h"

void display(const std::vector<Account *> &acc_vec) {

	for(const auto &acc : acc_vec) {
	
		std::cout << acc->print() << std::endl;
	}		
}

void deposit(std::vector<Account *> &acc_vec, const double amount) {

	for(auto &acc : acc_vec) {
	
		bool can_deposit = acc->deposit(amount);
		if(can_deposit) {
		
			std::cout << "Deposited $" << amount << " into " << acc->print() << std::endl; 
		}
		else {
		
			std::cout << "Cannot deposit " << amount << " into " << acc->print() << std::endl;
		}
	}	
}

void withdraw(std::vector<Account *> &acc_vec, const double amount) {

	for(auto &acc : acc_vec) {
	
		bool can_withdraw = acc->withdraw(amount);
		if(can_withdraw) {
			
			std::cout << "Withdrew $" << amount << " from " << acc->print() << std::endl;
		}
		else {
		
			std::cout << "Insufficient balance in " << acc->print() << std::endl;
		}
	}
}
