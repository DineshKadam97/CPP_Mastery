#include <iostream>
#include "../include/CCreditCard.hpp"

CCreditCard::CCreditCard()
{

}

void CCreditCard::Payment(double _amount)
{
    std::cout << "Payment of Rupees : " << _amount << " is successfull using CreditCard." << std::endl;
}