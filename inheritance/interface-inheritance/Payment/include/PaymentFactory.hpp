#ifndef _PAYMENT_FACTORY
#define _PAYMENT_FACTORY

#include <iostream>
#include <string>
#include "IPayment.hpp"
#include "CCreditCard.hpp"
#include "CNetBanking.hpp"
#include "CUpiPayment.hpp"

class PaymentFactory
{
    public:
        static IPayment* getPaymentMode(const std::string& mode);
};

#endif /* _PAYMENT_FACTORY */