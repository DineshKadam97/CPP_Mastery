#include <iostream>
#include <stdexcept>
#include "IStudent.hpp"

void test();

int main()
{
    test();
    return 0;
}

void test()
{
    IStudent* pIStudent = IStudent::getStudentInstance(13, "Dinesh Kadam", 98, 95, 93, 95, 99, 100);

    std::cout << "Average :" << pIStudent->calculateAvergae() << std::endl;
}
