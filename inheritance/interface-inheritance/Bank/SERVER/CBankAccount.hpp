#ifndef _CBANKACCOUNT_HPP
#define _CBANKACCOUNT_HPP

#include "IBankAccount.hpp"

class CBankAccount : public IBankAccount
{
    private:
        double bankBalance;

    public:
        CBankAccount(double _bankBalance);

        void despositMoney(double ammount);
        void withdrawMoney(double amount);
        double checkCurrentBalance();
};

#endif /*_CBANKACCOUNT_HPP*/