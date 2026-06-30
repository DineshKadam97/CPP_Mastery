#ifndef _CMYSQL_HPP
#define _CMYSQL_HPP

#include "IDatabase.hpp"

class CMYSQL : public IDatabase
{
    public:
        CMYSQL();
        ~CMYSQL();
        void connect();
        void disconnect();
        void executeQuery();
};

#endif /* _CMYSQL_HPP */