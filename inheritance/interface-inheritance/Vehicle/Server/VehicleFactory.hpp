#ifndef _VEHICLE_FACTORY_HPP
#define _VEHICLE_FACTORY_HPP

#include <iostream>
#include <String>
#include "IVehicle.hpp"
#include "CVehicle.hpp"

class VehicleFactory
{
    public:
        static IVehicle* getVehicleInstance(std::string); 
};
#endif /*_VEHICLE_FACTORY_HPP*/