#ifndef ACCOUNTUTIL_H_
#define ACCOUNTUTIL_H_

#include <vector>
#include "Account.h"
#include "SavingsAccount.h"

void display(const std::vector<Account> acc_vec);
void deposit(std::vector<Account> acc_vec, double amount);
void withdraw(std::vector<Account> acc_vec, double amount);

void display(const std::vector<SavingsAccount> sav_acc_vec);
void deposit(std::vector<SavingsAccount> sav_acc_vec, double amount);
void withdraw(std::vector<SavingsAccount> sav_acc_vec, double amount);

#endif
