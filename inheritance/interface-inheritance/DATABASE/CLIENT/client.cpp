#include <iostream>
#include "IDatabase.hpp"
#include "DatabaseFactory.hpp"

void testDatabase(void);

int main(void)
{
    testDatabase();
    return 0;
}

void testDatabase(void)
{
    IDatabase* mySQL = DatabaseFactory::getDatabaseInstance("MySQL");
    mySQL->connect();
    mySQL->disconnect();
    mySQL->executeQuery();

    IDatabase* myPostgreSQL = DatabaseFactory::getDatabaseInstance("PostgreSQL");
    myPostgreSQL->connect();
    myPostgreSQL->disconnect();
    myPostgreSQL->executeQuery();

    IDatabase* mySQLite = DatabaseFactory::getDatabaseInstance("SQLite");
    mySQLite->connect();
    mySQLite->disconnect();
    mySQLite->executeQuery();
}
