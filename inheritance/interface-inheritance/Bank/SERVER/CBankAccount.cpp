#include <stdexcept>
#include <iostream>
#include "CBankAccount.hpp"

CBankAccount::CBankAccount(double _bankBalance)
{
    if(_bankBalance < 0)
    {
        throw std::domain_error("Bank Balance can not be negative...");
    }
    bankBalance = _bankBalance;
}

void CBankAccount::despositMoney(double amount)
{
    bankBalance += amount;
    std::cout << amount << " rupees are credited in your account. Your new bank balance is " << bankBalance << std::endl;
}
void CBankAccount::withdrawMoney(double amount)
{
    bankBalance -= amount;
    std::cout << amount << " rupees are debited from your account. Your new bank balance is " << bankBalance << std::endl;
}

double CBankAccount::checkCurrentBalance()
{
    return bankBalance;
}

IBankAccount* IBankAccount::getBankAccount(double _bankBalance)
{
    return new CBankAccount(_bankBalance);
}
