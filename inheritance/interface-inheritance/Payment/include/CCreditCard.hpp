#ifndef _CCREDITCARD_HPP
#define _CCREDITCARD_HPP

#include "IPayment.hpp"

class CCreditCard : public IPayment
{
    public:
        CCreditCard();
        void Payment(double _amount);
};

#endif /* _CCREDITCARD_HPP */