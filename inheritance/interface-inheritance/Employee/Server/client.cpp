#include <iostream>
#include "IEmployee.hpp"

void testEmployee(void);

int main(void)
{
    testEmployee();
    return 0;
}

void testEmployee(void)
{
    IEmployee* employee_1 = IEmployee::getEmployeeInstance(101, "Dinesh Kadam", 150000);

    std::cout << "ID: " << employee_1->getEmployeeID() << std::endl
              << "Name: " << employee_1->getEmployeeName() << std::endl
              << "Salary: " << employee_1->getSalary() << std::endl;
}