#include <iostream>
#include "IVehicle.hpp"
#include "VehicleFactory.hpp"

void testVehicle(void);

int main(void)
{
    testVehicle();
    return 0;
}

void testVehicle(void)
{
    IVehicle* myBike = VehicleFactory::getVehicleInstance("Bike");
    if(myBike)
    {
        myBike->start();
        myBike->stop();
        myBike->fuelConsumption();
    }

    IVehicle* myCar = VehicleFactory::getVehicleInstance("Car");
    if(myCar)
    {
        myCar->start();
        myCar->stop();
        myCar->fuelConsumption();
    }

    delete myCar;
    delete myBike;
}