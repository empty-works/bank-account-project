#include <iostream>
#include <vector>
#include "Account.h"
#include "SavingsAccount.h"
#include "AccountUtil.h"

int main() {
	
	std::vector<Account> acc_vec{};
	Account default_account;
	acc_vec.push_back(default_account); // Account name: Unnamed account || Balance: $0.0 
	display(acc_vec);		

	return 0;
}
