#include <iostream>
#include <vector>
#include <memory>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include "AccountUtil.h"
#include "IllegalBalanceException.h"

int main() {
	
	std::vector<Account *> sav_acc_vec;

	try {
	std::unique_ptr<Account> acc_ptr = std::make_unique<SavingsAccount>("Test Account", -1000);	
	}
	catch(IllegalBalanceException &e) {
		
		std::cout << e.what() << std::endl;	
	}
	// Create savings accounts
	/*
	Account *sav_acc = new SavingsAccount();
	Account *sav_acc_2 = new SavingsAccount("MySavingsAccount");
	Account *sav_acc_3 = new SavingsAccount("MySecondSavingsAccount", 2000);
	Account *sav_acc_4 = new SavingsAccount("MyThirdSavingsAccount", 2000, 10);

	sav_acc_vec.push_back(sav_acc);
	sav_acc_vec.push_back(sav_acc_2);		
	sav_acc_vec.push_back(sav_acc_3);
	sav_acc_vec.push_back(sav_acc_4);
	display(sav_acc_vec);

	std::cout << "------------------------------" << std::endl;

	// Deposit amounts in savings account
	deposit(sav_acc_vec, 2000);

	std::cout << "------------------------------" << std::endl;

	// Withdraw amount from savings account
	withdraw(sav_acc_vec, 500);

	delete sav_acc;
	delete sav_acc_2;
	delete sav_acc_3;
	delete sav_acc_4;
	
	std::cout << "------------------------------" << std::endl;
	
	std::vector<Account *> check_acc_vec;
	
	// Create checking account
	Account *check_acc = new CheckingAccount();
	Account *check_acc_2 = new CheckingAccount("MyCheckingAccount");
	Account *check_acc_3 = new CheckingAccount("MySecondCheckingAccount", 2000);

	check_acc_vec.push_back(check_acc);
	check_acc_vec.push_back(check_acc_2);
	check_acc_vec.push_back(check_acc_3);
	display(check_acc_vec);

	std::cout << "------------------------------" << std::endl;

	// Deposit amounts in checking account
	deposit(check_acc_vec, 3000);		
	
	std::cout << "------------------------------" << std::endl;

	// Withdraw amounts in checking account
	withdraw(check_acc_vec, 2000);

	delete check_acc;
	delete check_acc_2;
	delete check_acc_3;

	std::cout << "------------------------------" << std::endl;

	std::vector<Account *> trust_acc_vec;

	// Create trust accounts
	Account *trust_acc = new TrustAccount();
	Account *trust_acc_2 = new TrustAccount("MyTrustAccount");
	Account *trust_acc_3 = new TrustAccount("MySecondTrustAccount", 4000);

	trust_acc_vec.push_back(trust_acc);
	trust_acc_vec.push_back(trust_acc_2);
	trust_acc_vec.push_back(trust_acc_3);
	display(trust_acc_vec);

	std::cout << "------------------------------" << std::endl;

	// Deposit amounts in trust account
	deposit(trust_acc_vec, 5000);

	std::cout << "------------------------------" << std::endl;

	// Withdraw amounts in trust account
	withdraw(trust_acc_vec, 4999); // More than 20% of balance...should fail.
	withdraw(trust_acc_vec, 500); // Valid withdrawal.
	*/

	return 0;
}
