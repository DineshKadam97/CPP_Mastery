#include "CCalculator.hpp"

template<typename T>
CCalculator<T>::CCalculator(std::vector<T> _vec)
{
    vec = _vec;
}

template<typename T>
T CCalculator<T>::Addition()
{
    T add;
    for(auto x : vec)
    {
        add += x;
    }

    return add;
}

template<typename T>
T CCalculator<T>::Subtraction()
{
    T sub;

    return sub;
}

template<typename T>
T CCalculator<T>::Multiplication()
{
    T mult;

    for(auto x : vec)
    {
        mult *= 1;
    }

    return mult;
}

template<typename T>
T CCalculator<T>::Division()
{
    T div;

    return div;
}


template<typename T>
ICalculator<T>* ICalculator<T>::getCalculatorInstance(std::vector<T> _vec)
{
    return new CCalculator<T>(_vec);
}

template class CCalculator<int>;

template
ICalculator<int>* ICalculator<int>::getCalculatorInstance(
    std::vector<int>);