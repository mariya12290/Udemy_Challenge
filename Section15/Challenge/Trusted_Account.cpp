#include "Trusted_Account.hpp"

int Trusted_Account::withdraw_count{};

std::ostream &operator<<(std::ostream &out, const Trusted_Account &trust_acc){
    out<<"Trusted Account : "<<trust_acc.name<< " : "<<trust_acc.balance<<" : "<<trust_acc.int_rate;
    return out;
}

Trusted_Account::Trusted_Account(std::string name, double balance, double int_rate):Account(name, balance), int_rate{int_rate}{

}

bool Trusted_Account::deposit(double amount){
     amount += amount * (int_rate/100);
    if (amount >5000.0){

   
    return Account::deposit(amount+50.0);
    }else{
 return Account::deposit(amount);
    }
}

bool Trusted_Account::withdraw(double amount){

      if (balance-amount >=0 &&withdraw_count <5) {
        balance-=amount;
        withdraw_count +=1;
        return true;
    } else
        return false;
}