#include <iostream>
#include "../include/CUpiPayment.hpp"

CUpiPayment::CUpiPayment()
{

}

void CUpiPayment::Payment(double _amount)
{
    std::cout << "Payment of Rupees : " << _amount << " is successfull using UPI payment." << std::endl;
}