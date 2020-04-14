#include <iostream>
#include <vector>
#include "Account.h"
#include "SavingsAccount.h"
#include "AccountUtil.h"

int main() {
	
	std::vector<Account> acc_vec{};
	
	// Create normal accounts
	acc_vec.push_back(Account {}); // Account name: Unnamed account || Balance: $0.0
       	acc_vec.push_back(Account {"MyAccount"}); // Account name: MyAccount || Balance: $0.0
	acc_vec.push_back(Account {"MySecondAccount", 1000.00}); // Account name: MySecondAccount || Balance: $1000.00	
	display(acc_vec);		

	// Deposit amounts in normal account
	deposit(acc_vec, 1000);

	// Withdraw amounts in normal account
	withdraw(acc_vec, 100);
	display(acc_vec);

		
	
	return 0;
}
