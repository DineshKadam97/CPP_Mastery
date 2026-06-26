// 13. Payment Library

// Create a payment SDK.

// Requirements:

// Credit card payment
// UPI payment
// Net banking payment

// Every payment method should expose a common payment interface.

#ifndef _IPAYMENT_HPP
#define _IPAYMENT_HPP

class IPayment
{
    public:
        virtual ~IPayment(){}
        virtual void Payment(double _amount) = 0;
};

#endif /* _IPAYMENT_HPP */