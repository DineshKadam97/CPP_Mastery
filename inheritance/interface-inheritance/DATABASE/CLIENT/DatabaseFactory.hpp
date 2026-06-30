#ifndef _DATABASEFACTORY_HPP
#define _DATABASEFACTORY_HPP

#include <iostream>
#include <string>
#include "IDatabase.hpp"

class DatabaseFactory
{
    public:
        static IDatabase* getDatabaseInstance(const std::string& dataBase);
};

#endif /* _DATABASEFACTORY_HPP */
