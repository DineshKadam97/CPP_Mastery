#include <iostream>
#include "IBankAccount.hpp"

void testBankAccount(void);

int main(void)
{
    testBankAccount();
    return 0;
}

void testBankAccount(void)
{
    IBankAccount* myAccount = IBankAccount::getBankAccount(500000);
    myAccount->despositMoney(55000);
    myAccount->withdrawMoney(15000);
    std::cout << "Balance in your account is : " << myAccount->checkCurrentBalance() << std::endl;
}
