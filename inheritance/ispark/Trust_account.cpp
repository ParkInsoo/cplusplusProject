#include "Trust_account.h"

TrustAccount::TrustAccount(string name, double balance, double int_rate)
				: Account { name, balance}, int_rate{int_rate}
{
}

bool TrustAccount::deposit(double amount)
{
	amount += amount * (int_rate/100);
	if (5000 <= amount)
	{
		amount += 50;
	}

	return Account::deposit(amount);
}

ostream &operator<<(ostream &os, const Savings_Account &account)
{
    os << "[Trust Account: " << account.name << " : " << account.balance << "," << account.int_rate << "% ]";
    return os;
}
