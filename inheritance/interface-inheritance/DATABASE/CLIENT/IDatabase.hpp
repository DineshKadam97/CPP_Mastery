// 15. Database Library

// Create a database abstraction layer.

// Requirements:

// Connect
// Disconnect
// Execute query

// Different implementations:

// MySQL
// PostgreSQL
// SQLite

// Client should only depend on the interface.

#ifndef _IDATABASE_HPP
#define _IDATABASE_HPP

class IDatabase
{
    public:
        virtual void connect() = 0;
        virtual void disconnect() = 0;
        virtual void executeQuery() = 0;
};

#endif /* _IDATABASE_HPP */