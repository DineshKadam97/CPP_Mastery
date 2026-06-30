#include <iostream>
#include "CSQLite.hpp"

void CSQLITE::connect()
{
    std::cout << "SQLite connected successfully." << std::endl;
}

void CSQLITE::disconnect()
{
    std::cout << "SQLite disconnected successfully." << std::endl;
}

void CSQLITE::executeQuery()
{
    std::cout << "SQLite executed the query successfully." << std::endl;
}
