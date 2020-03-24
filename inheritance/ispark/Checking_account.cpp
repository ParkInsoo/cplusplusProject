#include "Checking_account.h"

CheckingAccount::CheckingAccount(string name, double balance)
				: Account{name, blance}

bool CheckingAccount::withdraw(double amount)
{
	amount += amount + 1.5;
	return Account::withdraw(amount);
}

ostream &operator<<(ostream &os, const CheckingAccount &account)
{
	os << "[Checkig Account: " <<  account.name << " : " << account.balance << "]";
	return os;
}
