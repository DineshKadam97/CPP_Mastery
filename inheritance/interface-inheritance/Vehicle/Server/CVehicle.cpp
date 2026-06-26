#include "CVehicle.hpp"

Bike::Bike()
{

}

void Bike::start()
{
    std::cout << "Bike Started" << std::endl;
}

void Bike::stop()
{
    std::cout << "Bike Stopped" << std::endl;
}

double Bike::fuelConsumption()
{
    return 34.5;
}

Car::Car()
{

}

void Car::start()
{
    std::cout << "Car Started" << std::endl;
}

void Car::stop()
{
    std::cout << "Car Stopped" << std::endl;
}

double Car::fuelConsumption()
{
    return 125.24;
}
