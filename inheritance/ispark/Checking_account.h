#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_

#include "Account.h"

class CheckingAccount : public Account
{
	friend ostream &operator<<(ostream &os, const Savings_Account &account);

public:
	CheckingAccount(string name = def_name, double balance = def_balance);
	bool withdraw(double amount);
private:
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;
};

#endif /* _CHECKING_ACCOUNT_H_ */
