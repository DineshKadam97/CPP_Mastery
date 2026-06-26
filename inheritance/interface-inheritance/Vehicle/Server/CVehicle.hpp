#ifndef _CVEHICLE_HPP
#define _CVEHICLE_HPP

#include <iostream>
#include "IVehicle.hpp"

class Bike : public IVehicle
{
    public:
        Bike();
        void start() override;
        void stop() override;
        double fuelConsumption() override;
};

class Car : public IVehicle
{
    public:
        Car();
        void start() override;
        void stop() override;
        double fuelConsumption() override;
};

#endif /* _CVEHICLE_HPP */