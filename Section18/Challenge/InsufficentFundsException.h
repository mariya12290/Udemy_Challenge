#ifndef __INSUFFICENT_FUNDS_EXCEPTION_H__
#define __INSUFFICENT_FUNDS_EXCEPTION_H__

#include <iostream> 
#include <string>
#include <exception>

class InsufficentFundsException : public std::exception
{
    private:
    std::string m_error{};
public:
     InsufficentFundsException(const std::string &str):m_error{str} {}
    ~ InsufficentFundsException() {}
   virtual const char* what() const noexcept override{
     return m_error.c_str();
    }
};

#endif // __ILLEGAL_BALANCE_EXCEPTION_H__
