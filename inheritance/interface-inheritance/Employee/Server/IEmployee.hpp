// 3. Employee Library

// Create a library that manages information about one employee.

// Requirements:

// Store employee ID, name, and salary.
// Allow updating employee information.
// Allow reading employee information.

#ifndef _IEMPLOYEE_HPP
#define _IEMPLOYEE_HPP

#include <iostream>
#include <string>

class IEmployee
{
    public:
        virtual void setEmployeeID(unsigned int _employeeID) = 0;
        virtual void setEmployeeName(std::string _employeeName) = 0;
        virtual void setEmployeeSalary(float _salary) = 0;

        virtual unsigned int getEmployeeID() const = 0;
        virtual std::string getEmployeeName() const = 0;
        virtual float getSalary() const = 0;

        static IEmployee* getEmployeeInstance(unsigned int _employeeID, std::string _employeeName, float _salary);
};

#endif /* _IEMPLOYEE_HPP */