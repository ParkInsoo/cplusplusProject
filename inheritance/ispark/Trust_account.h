#ifndef TRUST_ACCOUNT_H_
#define TRUST_ACCOUNT_H_

#include "Account.h"

class TrustAccount : public Account
{
	friend ostream &operator<<(ostream &os, const TrustAccount &account);
public:
	TrustAccount(string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
	bool deposit(double amount);
protected:
	double int_rate;
private:
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
};

#endif /* TRUST_ACCOUNT_H_ */
