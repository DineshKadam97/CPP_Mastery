#include <stdexcept>
#include "CEmployee.hpp"

CEmployee::CEmployee(unsigned int _employeeID, std::string _employeeName, float _salary)
{
    if(_employeeID <= 0 || _employeeName.empty() || _salary <= 0.0)
    {
        throw std::domain_error("Invalid Information of the employee");
    }

    employeeID = _employeeID;
    employeeName = _employeeName;
    employeeSalary = _salary;
}

void CEmployee::setEmployeeID(unsigned int _employeeID)
{
    employeeID = _employeeID;
}

void CEmployee::setEmployeeName(std::string _employeeName)
{
    employeeName = _employeeName;
}

void CEmployee::setEmployeeSalary(float _salary)
{
    employeeSalary = _salary;
}

unsigned int CEmployee::getEmployeeID() const
{
    return employeeID;
}

std::string CEmployee::getEmployeeName() const
{
    return employeeName;
}

float CEmployee::getSalary() const
{
    return employeeSalary;
}

IEmployee* IEmployee::getEmployeeInstance(unsigned int _employeeID, std::string _employeeName, float _salary)
{
    return new CEmployee(_employeeID, _employeeName, _salary);
}