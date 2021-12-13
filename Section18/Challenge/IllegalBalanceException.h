#ifndef __ILLEGAL_BALANCE_EXCEPTION_H__
#define __ILLEGAL_BALANCE_EXCEPTION_H__

#include <iostream>
#include <exception>
#include <string>

class IllegalBalanceException : public std::exception
{
private:
    std::string s{};
public:
    IllegalBalanceException(const std::string & str):s{str} {}
    ~IllegalBalanceException() {}
   virtual const char* what() const noexcept  override{
     return s.c_str();
    }
};

#endif // __ILLEGAL_BALANCE_EXCEPTION_H__
