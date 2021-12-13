#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    // test your code here
    Savings_Account SavAccount1("suri",100, 1.0);
    try{
    Savings_Account SAvAccount2("kumar",-100, 2.0);
    }catch(IllegalBalanceException& ex){
        std::cout<<ex.what()<<std::endl;
    }
    SavAccount1.withdraw(100);
    SavAccount1.withdraw(-100);
  
    std::cout << "Program completed successfully" << std::endl;
    return 0;
}

