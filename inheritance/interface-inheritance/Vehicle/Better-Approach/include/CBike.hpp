#ifndef _CBIKE_HPP
#define _CBIKE_HPP

#include <iostream>
#include "IVehicle.hpp"

class CBike : public IVehicle
{
    public:
        void start();
        void stop();
        double fuelConsumption();
};

#endif // _CBIKE_HPP
