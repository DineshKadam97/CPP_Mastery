#include "../include/PaymentFactory.hpp"
#include "../include/IPayment.hpp"
#include "../include/CCreditCard.hpp"
#include "../include/CNetBanking.hpp"
#include "../include/CUpiPayment.hpp"

IPayment* PaymentFactory::getPaymentMode(const std::string& mode)
{
    if(mode == "UPI")
    {
        return (new CUpiPayment);
    }
    else if(mode == "Net Banking")
    {
        return (new CNetBanking);
    }
    else if(mode == "CreditCard")
    {
        return (new CCreditCard);
    }
    else
    {
        std::cout << "Invalid Payment Mode" << std::endl;
        return nullptr;
    }
}