#ifndef _CUPIPAYMENT_HPP
#define _CUPIPAYMENT_HPP

#include "IPayment.hpp"

class CUpiPayment : public IPayment
{
    public:
        CUpiPayment();
        void Payment(double _amount);
};

#endif /* _CUPIPAYMENT_HPP */