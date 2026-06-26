#ifndef _CCAR_HPP
#define _CCAR_HPP

#include <iostream>
#include "IVehicle.hpp"

class CCar : public IVehicle
{
    public:
        void start();
        void stop();
        double fuelConsumption();
};

#endif // _CBIKE_HPP
