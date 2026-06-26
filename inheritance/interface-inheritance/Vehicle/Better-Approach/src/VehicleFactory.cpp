#include "../include/VehicleFactory.hpp"

IVehicle* VehicleFactory::getVehicleInstance(const std::string& vehicle)
{
    if(vehicle == "Bike")
    {
        return (new CBike);
    }
    else if(vehicle == "Car")
    {
        return (new CCar);
    }
    else
    {
        std::cout << "Invalid Vehicle" << std::endl;
        return nullptr;
    }
}
