/**
 * @author: Au Doan Ngoc
 * @date: Feb 27, 2024
 * @brief: Factory method example
*/

#ifndef __DB_CONNECTION_FACTORY_H__
#define __DB_CONNECTION_FACTORY_H__

#include "base_class.h"

typedef enum
{
    CONNECTION_TYPE_ORACLE = 0,
    CONNECTION_TYPE_SQLSERVER = 1,
    CONNECTION_TYPE_MYSQL = 2,
} eConnectionType;

class DbConnectionFactory
{
public:
    static IBase* createInstance(eConnectionType connectionType);

private:

};

IBase* DbConnectionFactory::createInstance(eConnectionType connectionType)
{
    IBase* connection = nullptr;

    switch (connectionType)
    {
    case CONNECTION_TYPE_ORACLE:
        connection = new OracleConnection();
        break;
    case CONNECTION_TYPE_SQLSERVER:
        connection = new SqlServerConnection();
        break;
    case CONNECTION_TYPE_MYSQL:
        connection = new MySqlConnection();
        break;
    default:
        break;
    }

    return connection;
}

#endif /* __DB_CONNECTION_FACTORY_H__ */
