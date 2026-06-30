#include "DatabaseFactory.hpp"
#include "CMySql.hpp"
#include "CPostgreSQL.hpp"
#include "CSQLite.hpp"

IDatabase* DatabaseFactory::getDatabaseInstance(const std::string& dataBase)
{
    if(dataBase == "MySQL")
    {
        return (new CMYSQL);
    }
    else if(dataBase == "PostgreSQL")
    {
        return (new CPostgreSQL);
    }
    else if(dataBase == "SQLite")
    {
        return (new CSQLITE);
    }
    else
    {
        std::cout << "Invalid database..." << std::endl;
        return nullptr;
    }
}