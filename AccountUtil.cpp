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

/*
void display(const std::vector<SavingsAccount> &sav_acc_vec) {

	for(const auto &acc : sav_acc_vec) {
	
		//std::cout << acc << std::endl;
		acc.print(std::cout);
	}	
}

void deposit(std::vector<SavingsAccount> &sav_acc_vec, const double amount) {

	for(auto &acc : sav_acc_vec) {
	
		bool can_deposit = acc.deposit(amount);
		if(can_deposit) {
		
			std::cout << "Deposited $" << amount << " into " << acc << std::endl;
		}
		else {
		
			std::cout << "Cannot deposit into " << acc << std::endl;
		}
	}
}

void withdraw(std::vector<SavingsAccount> &sav_acc_vec, const double amount) {

	for(auto &acc : sav_acc_vec) {
	
		bool can_withdraw = acc.withdraw(amount);
		if(can_withdraw) {
		
			std::cout << "Withdraw $" << amount << " from " << acc << std::endl;
		}
		else {
		
			std::cout << "Insufficient balance in account " << acc << std::endl;
		}
	}	
}

void display(const std::vector<CheckingAccount> &check_acc_vec) {

	for(const auto &acc : check_acc_vec) {
	
		std::cout << acc << std::endl;	
	}		
}

void deposit(std::vector<CheckingAccount> &check_acc_vec, const double amount) {

	for(auto &acc : check_acc_vec) {
	
		bool can_deposit = acc.deposit(amount);
		if(can_deposit) {
		
			std::cout << "Deposited $" << amount << " into " << acc << std::endl; 
		}
		else {
		
			std::cout << "Cannot deposit " << amount << " into " << acc << std::endl;
		}
	}	
}

void withdraw(std::vector<CheckingAccount> &check_acc_vec, const double amount) {

	for(auto &acc : check_acc_vec) {
	
		bool can_withdraw = acc.withdraw(amount);
		if(can_withdraw) {
			
			std::cout << "Withdrew $" << amount << " from " << acc << std::endl;
		}
		else {
		
			std::cout << "Insufficient balance in " << acc << std::endl;
		}
	}
}

void display(const std::vector<TrustAccount> &trust_acc_vec) {

	for(const auto &acc : trust_acc_vec) {
	
		std::cout << acc << std::endl;
	}
}

void deposit(std::vector<TrustAccount> &trust_acc_vec, const double amount) {

	for(auto &acc : trust_acc_vec) {
		
		bool is_valid = acc.deposit(amount);	
		if(is_valid) {
		
			std::cout << "Deposit $" << amount << " in " << acc << std::endl;
		}
	}
}

void withdraw(std::vector<TrustAccount> &trust_acc_vec, const double amount) {

	for(auto &acc : trust_acc_vec) {
	
		bool is_valid = acc.withdraw(amount);
		if(is_valid) {
		
			std::cout << "Withdraw $" << amount << " from " << acc << std::endl;
		}
	}
}
*/
