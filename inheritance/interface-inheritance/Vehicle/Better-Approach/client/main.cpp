#include "../include/IVehicle.hpp"
#include "../include/VehicleFactory.hpp"

void testVehicles(void);

int main(void)
{
    testVehicles();
    return 0;
}

void testVehicles(void)
{
    IVehicle* myBike = VehicleFactory::getVehicleInstance("Bike");
    myBike->start();
    myBike->stop();

    IVehicle* myCar = VehicleFactory::getVehicleInstance("Car");
    myCar->start();
    myCar->stop();
}
