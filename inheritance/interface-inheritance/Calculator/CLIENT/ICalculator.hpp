// 7. Calculator Library

// Create a library for mathematical operations.

// Requirements:

// Addition
// Subtraction
// Multiplication
// Division
// Error handling for divide-by-zero

#ifndef _ICALCULATOR_HPP
#define _ICALCULATOR_HPP

#include <iostream>
#include <vector>

template<typename T>
class ICalculator
{
    public:
        virtual T Addition() = 0;
        virtual T Subtraction() = 0;
        virtual T Multiplication() = 0;
        virtual T Division() = 0;

        static ICalculator<T>* getCalculatorInstance(std::vector<T> _vec);
};

#endif /* _ICALCULATOR_HPP */