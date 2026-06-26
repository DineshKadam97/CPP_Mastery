// 12. Vehicle Library

// Create a transportation library.

// Requirements:

// Different vehicle types.
// Every vehicle can start.
// Every vehicle can stop.
// Every vehicle can report fuel consumption.

// Client should not care whether it is a car, bike, or truck.

#ifndef _IVEHICLE_HPP
#define _IVEHICLE_HPP

class IVehicle
{
    public:
        virtual ~IVehicle(){};
        virtual void start() = 0;
        virtual void stop() = 0;
        virtual double fuelConsumption() = 0;
};

#endif /* _IVEHICLE_HPP */