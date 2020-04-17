#include <iostream>
#include <vector>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include "AccountUtil.h"

int main() {
	
	std::vector<Account> acc_vec;
	
	// Create normal accounts
	acc_vec.push_back(Account{}); // Account name: Unnamed account || Balance: $0.0
       	acc_vec.push_back(Account{"MyAccount"}); // Account name: MyAccount || Balance: $0.0
	acc_vec.push_back(Account{"MySecondAccount", 1000.00}); // Account name: MySecondAccount || Balance: $1000.00	
	display(acc_vec);		

	std::cout << "------------------------------" << std::endl;

	// Deposit amounts in normal account
	deposit(acc_vec, 1000);

	std::cout << "------------------------------" << std::endl;

	// Withdraw amounts in normal account
	withdraw(acc_vec, 100);

	std::cout << "------------------------------" << std::endl;

	std::vector<SavingsAccount> sav_acc_vec;

	// Create savings accounts
	sav_acc_vec.push_back(SavingsAccount{});
	sav_acc_vec.push_back(SavingsAccount{"MySavingsAccount"});		
	sav_acc_vec.push_back(SavingsAccount{"MySecondSavingsAccount", 2000});
	sav_acc_vec.push_back(SavingsAccount{"MyThirdSavingsAccount", 2000, 10});
	display(sav_acc_vec);

	std::cout << "------------------------------" << std::endl;

	// Deposit amounts in savings account
	deposit(sav_acc_vec, 2000);

	std::cout << "------------------------------" << std::endl;

	// Withdraw amount from savings account
	withdraw(sav_acc_vec, 500);

	std::cout << "------------------------------" << std::endl;

	std::vector<CheckingAccount> check_acc_vec;
	
	// Create checking account
	check_acc_vec.push_back(CheckingAccount{});
	check_acc_vec.push_back(CheckingAccount{"MyCheckingAccount"});
	check_acc_vec.push_back(CheckingAccount{"MySecondCheckingAccount", 2000});
	display(check_acc_vec);

	std::cout << "------------------------------" << std::endl;

	// Deposit amounts in checking account
	deposit(check_acc_vec, 3000);		
	
	std::cout << "------------------------------" << std::endl;

	// Withdraw amounts in checking account
	withdraw(check_acc_vec, 2000);

	return 0;
}
