#include <iostream>
#include "IllegalBalanceException.h"


const char* IllegalBalanceException::what() const noexcept override {
     std::string str{"Account is created with negative balance"};
     return str.c_str(); }