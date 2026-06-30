#ifndef _SQLITE_HPP
#define _SQLITE_HPP

#include "IDatabase.hpp"

class CSQLITE : public IDatabase
{
    public:
    void connect();
    void disconnect();
    void executeQuery();
};

#endif /* _SQLITE_HPP */
