#include <iostream>
#include "AccountUtil.h"

void display(const std::vector<Account> acc_vec) {

	for(const auto &acc : acc_vec) {
	
		std::cout << acc << std::endl;	
	}		
}

void deposit(std::vector<Account> acc_vec, double amount) {

	for(auto &acc : acc_vec) {
	
		acc.deposit(amount);
		std::cout << "Deposited $" << amount << " into " << acc.get_name() << " regular account." << std::endl; 
	}	
}

void withdraw(std::vector<Account> acc_vec, double amount) {

	for(auto &acc : acc_vec) {
	
		bool can_withdraw = acc.withdraw(amount);
		if(can_withdraw) {
			
			std::cout << "Withdrew $" << amount << " from " << acc.get_name() << " regular account." << std::endl;
		}
		else {
		
			std::cout << "Insufficient amount." << std::endl;
		}
	}
}

void display(const std::vector<SavingsAccount> sav_acc_vec) {

	for(const auto &acc : sav_acc_vec) {
	
		std::cout << acc << std::endl;
	}	
}

void deposit(std::vector<SavingsAccount> sav_acc_vec, double amount) {

	for(auto &acc : sav_acc_vec) {
	
		acc.deposit(amount);
		std::cout << "Deposited $" << amount << " into " << acc.get_name() << " savings account." << std::endl;
	}
}

void withdraw(std::vector<SavingsAccount> sav_acc_vec, double amount) {

	for(auto &acc : sav_acc_vec) {
	
		bool can_withdraw = acc.withdraw(amount);
		if(can_withdraw) {
		
			std::cout << "Withdraw $" << amount << " from " << acc.get_name() << " savings account." << std::endl;
		}
		else {
		
			std::cout << "Insufficient amount." << std::endl;
		}
	}	
}
