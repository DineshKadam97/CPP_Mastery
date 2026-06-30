#include <iostream>
#include "CMySql.hpp"

CMYSQL::CMYSQL()
{
    
}

CMYSQL::~CMYSQL()
{
    
}

void CMYSQL::connect()
{
    std::cout << "MySQL connected successfully" << std::endl;
}

void CMYSQL::disconnect()
{
    std::cout << "MySQL disconnected successfully" << std::endl;
}

void CMYSQL::executeQuery()
{
        std::cout << "MySQL executed query successfully" << std::endl;
}
