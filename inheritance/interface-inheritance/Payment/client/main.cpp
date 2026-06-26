#include <iostream>
#include "IPayment.hpp"
#include "PaymentFactory.hpp"

void testPaymentMode(void);

int main(void)
{
    testPaymentMode();
    return 0;
}

void testPaymentMode(void)
{
    IPayment* UPI = PaymentFactory::getPaymentMode("UPI");
    UPI->Payment(34564);

    IPayment* CreditCard = PaymentFactory::getPaymentMode("CreditCard");
    CreditCard->Payment(345364);

    IPayment* NetBanking = PaymentFactory::getPaymentMode("Net Banking");
    NetBanking->Payment(3454980904);

    delete NetBanking;
    delete CreditCard;
    delete UPI;
}