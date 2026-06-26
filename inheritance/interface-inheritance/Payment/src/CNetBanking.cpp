#include <iostream>
#include "../include/CNetBanking.hpp"

CNetBanking::CNetBanking()
{

}

void CNetBanking::Payment(double _amount)
{
    std::cout << "Payment of Rupees : " << _amount << " is successfull using CNetBanking." << std::endl;
}