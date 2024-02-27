/**
 * @author: Au Doan Ngoc
 * @date: Feb 27, 2024
 * @brief: Factory method example
*/

#ifndef __BASE_CLASS_H__
#define __BASE_CLASS_H__

#include <string>

using namespace std;

class IBase
{
public:

    virtual string description() = 0;

private:

};

class OracleConnection : public IBase
{
    string description()
    {
        return "OracleConnection";
    }

};

class SqlServerConnection : public IBase
{
    string description()
    {
        return "SqlServerConnection";
    }

};

class MySqlConnection : public IBase
{
    string description()
    {
        return "MySqlConnection ";
    }

};

#endif /* __BASE_CLASS_H__ */