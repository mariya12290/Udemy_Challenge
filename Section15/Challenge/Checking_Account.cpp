#include "Checking_Account.hpp"


std::ostream &operator<<(std::ostream &out, const  Checking_Account &chec_acc){
    out<<"Checking account : "<<chec_acc.name<<" : "<<chec_acc.balance<<" : "<<chec_acc.fee;
    return out;
}

Checking_Account::Checking_Account(std::string name, double balance, double fee):Account(name, balance),fee{fee}{

}

bool Checking_Account::withdraw(double amount){
    std::cout<<"Checking Account withdraw "<<std::endl;
    amount += fee;
    if((balance- amount)>=0){
        balance -= amount;
        return true;
    }else{
        std::cout<<"Insufficient funds "<<std::endl;
        return false;
    }
}