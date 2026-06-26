#ifndef _VEHICLE_FACTORY_HPP
#define _VEHICLE_FACTORY_HPP

#include <iostream>
#include <string>
#include "IVehicle.hpp"
#include "CBike.hpp"
#include "CCar.hpp"

class VehicleFactory
{
    public:
        static IVehicle* getVehicleInstance(const std::string&);
};

#endif /* _VEHICLE_FACTORY_HPP */
