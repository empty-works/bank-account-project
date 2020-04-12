#include <iostream>
#include "AccountUtil.h"

void display(const std::vector<Account> acc_vec) {

	for(const auto acc : acc_vec) {
	
		std::cout << acc << std::endl;	
	}		
}
void deposit(std::vector<Account> acc_vec, double amount);
void withdraw(std::vector<Account> acc_vec, double amount);

void display(const std::vector<SavingsAccount> sav_acc_vec);
void deposit(std::vector<SavingsAccount> sav_acc_vec, double amount);
void withdraw(std::vector<SavingsAccount> sav_acc_vec, double amount);
