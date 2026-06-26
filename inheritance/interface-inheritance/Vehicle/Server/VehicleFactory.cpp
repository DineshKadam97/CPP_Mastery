#include "VehicleFactory.hpp"

IVehicle* VehicleFactory::getVehicleInstance(std::string vehicle)
{
    if(vehicle == "Bike")
    {
        return (new Bike);
    }
    else if(vehicle == "Car")
    {
        return (new Car);
    }
    else
    {
        std::cout << "Invalid Vehicle type" << std::endl;
        return nullptr;
    }
}
