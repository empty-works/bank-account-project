#ifndef TRUSTACCOUNT_H_
#define TRUSTACCOUNT_H_

#include <iostream>
#include "SavingsAccount.h"

class TrustAccount: public SavingsAccount {

	friend std::ostream &operator<<(std::ostream &os, const TrustAccount &acc);

private:
	
};

#endif
