#ifndef ACCOUNTUTIL_H_
#define ACCOUNTUTIL_H_

#include <vector>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include "TrustAccount.h"

void display(const std::vector<Account *> &acc_vec);
void deposit(std::vector<Account *> &acc_vec, const double amount);
void withdraw(std::vector<Account *> &acc_vec, const double amount);

#endif
