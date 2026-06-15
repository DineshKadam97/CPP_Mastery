// 6. Bank Account Library

// Create a library representing a bank account.

// Requirements:

// Deposit money.
// Withdraw money.
// Check current balance.
// Prevent negative balances.

#ifndef _IBANKACCOUNT_HPP
#define _IBANKACCOUNT_HPP

class IBankAccount 
{
    public:
        virtual void despositMoney(double ammount) = 0;
        virtual void withdrawMoney(double amount) = 0;
        virtual double checkCurrentBalance() = 0;

        static IBankAccount* getBankAccount(double _BankBalance);
};

#endif /* _IBANKACCOUNT_HPP */