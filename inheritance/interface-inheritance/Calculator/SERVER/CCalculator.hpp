#ifndef _CCALCULATOR_HPP
#define _CCALCULATOR_HPP

#include "ICalculator.hpp"

template<typename T>
class CCalculator : public ICalculator<T>
{
    private:
        std::vector<T> vec;

    public:
        CCalculator(std::vector<T> _vec);

        T Addition();
        T Subtraction();
        T Multiplication();
        T Division();
};

#endif /* _CALCULATOR_HPP */