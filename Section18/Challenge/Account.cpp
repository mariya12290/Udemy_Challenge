#include "Account.h"
#include "IllegalBalanceException.h"
#include "InsufficentFundsException.h"

Account::Account(std::string name, double balance) 
    : name{name}, balance{balance} {
        if (balance < 0.0){
            throw IllegalBalanceException("Account is being created with negative balance");
        }
}

bool Account::deposit(double amount) {
    if (amount < 0) 
        return false;
    else {
        balance += amount;
        return true;
    }
}

bool Account::withdraw(double amount) {
     if (balance <= 0.0){
         std::cout<<balance<<std::endl;
            throw InsufficentFundsException("Withdraw of amount when the balance is negative");
     }else{
         balance -= amount;
     }
}

 void Account::print(std::ostream &os) const {
    os.precision(2);
    os << std::fixed;
    os << "[Account: " << name << ": " << balance << "]";
}
