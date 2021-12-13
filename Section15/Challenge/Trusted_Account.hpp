#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_
#include "Account.h"

// Trusted Account is a type of Account
//   adds an interest rate on every deposit, howver any 
// deposit greater than 5000 adds extra 50 into a balance as bonus
// Withdraw - 
//       limited to 3 per yearnand withdraw amount 
//should be less than 20 % of the account balance
// Deposit: - same a a regula account

class Trusted_Account: public Account {
    friend std::ostream &operator<<(std::ostream &os, const Trusted_Account &account);
private:
    static constexpr const char *def_name = "Unnamed Trusted Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0;
    static int withdraw_count;
protected:
    double  int_rate;
public:
    Trusted_Account(std::string name = def_name, double balance =def_balance, double int_rate = def_int_rate);    
    bool withdraw(double amount);
    bool deposit(double amount);
};

#endif // _CHECKING_ACCOUNT_H_