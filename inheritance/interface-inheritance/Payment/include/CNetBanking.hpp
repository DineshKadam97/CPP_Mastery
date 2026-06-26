#ifndef _CNETBANKING_HPP
#define _CNETBANKING_HPP

#include "IPayment.hpp"

class CNetBanking : public IPayment
{
    public:
        CNetBanking();
        void Payment(double _amount);
};

#endif /* _CNETBANKING_HPP */