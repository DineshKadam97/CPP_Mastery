#include <iostream>
#include "IDate.hpp"

void test_Date(void);

int main(void)
{
    test_Date();
    return 0;
}

void test_Date(void)
{
    IDate* pMyDate = IDate::getInstance(3, 6, 2026);

    std::cout << "Date : " << pMyDate->getDay() << "/" << pMyDate->getMonth() << "/" << pMyDate->getYear() << std::endl;

}