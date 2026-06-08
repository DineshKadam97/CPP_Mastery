#ifndef _CEMPLOYEE_HPP
#define _CEMPLOYEE_HPP

#include "IEmployee.hpp"

class CEmployee : public IEmployee
{
    private:
        unsigned int employeeID;
        std::string employeeName;
        float employeeSalary;

    public:
        CEmployee(unsigned int _employeeID, std::string _employeeName, float _salary);

        void setEmployeeID(unsigned int _employeeID);
        void setEmployeeName(std::string _employeeName);
        void setEmployeeSalary(float _salary);

        unsigned int getEmployeeID() const;
        std::string getEmployeeName() const;
        float getSalary() const;
};

#endif /* _CEMPLOYEE_HPP */