#include "ICalculator.hpp"

void testCalculator(void);

int main(void)
{
    testCalculator();
    return 0;
}

void testCalculator(void)
{
    std::vector<int> vec = {12, 13, 14, 15, 16};

    ICalculator<int>* myCalculator = ICalculator<int>::getCalculatorInstance(vec);
    std::cout << "Addition : " << myCalculator->Addition() << std::endl;
}
