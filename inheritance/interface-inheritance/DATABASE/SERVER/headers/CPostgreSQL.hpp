#ifndef _CPOSTGRESQL_HPP
#define _CPOSTGRESQL_HPP

#include "IDatabase.hpp"

class CPostgreSQL : public IDatabase
{
    public:
        void connect();
        void disconnect();
        void executeQuery();
};

#endif /* _CPOSTGRESQL_HPP */