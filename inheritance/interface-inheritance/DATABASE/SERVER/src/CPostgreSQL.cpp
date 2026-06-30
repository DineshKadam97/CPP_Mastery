#include <iostream>
#include "CPostgreSQL.hpp"

CPostgreSQL::CPostgreSQL()
{

}

CPostgreSQL::~CPostgreSQL()
{
    
}

void CPostgreSQL::connect()
{
    std::cout << "PostgreSQL connected successfully." << std::endl;
}

void CPostgreSQL::disconnect()
{
    std::cout << "PostgreSQL disconnected successfully." << std::endl;
}

void CPostgreSQL::executeQuery()
{
    std::cout << "PostgreSQL executed query successfully." << std::endl;
}
