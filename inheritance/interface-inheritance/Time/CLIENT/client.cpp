#include <iostream>
#include "ITIme.hpp"

void testTime(void);

int main(void)
{
    testTime();
    return 0;
}

void testTime(void)
{
    ITime* myTime = nullptr;
    try
    {
        myTime = ITime::getTimeInstance(12, 340, 400);
    }
    catch(std::domain_error& e)
    {
        std::cout << e.what() << std::endl;
    }

    std:: cout << "time is : " << myTime->getHour() << "HH:" << myTime->getMinutes() << "MM:" << myTime->getSeconds() << "SS" << std::endl;
}
