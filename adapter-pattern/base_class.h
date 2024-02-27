/**
 * @author: Au Doan Ngoc
 * @date: Feb 27, 2024
 * @brief: Adapter Factory example
*/

#ifndef __BASE_CLASS_H__
#define __BASE_CLASS_H__

#include <string>

using namespace std;

class IBackendA
{
public:
    virtual void setName(string name) = 0;
    virtual string getName() = 0;
};

class UserA : public IBackendA
{
public:
    void setName(string name)
    {
        this->m_name = name;
    }

    string getName()
    {
        return this->m_name;
    }

private:
    string m_name;
};

class IBackendB
{
public:
    virtual void setFirstName(string firstName) = 0;
    virtual void setLastName(string lastName) = 0;
    virtual string getFirstName() = 0;
    virtual string getLastName() = 0;
};

class UserB : public IBackendB
{
public:
    void setFirstName(string firstName)
    {
        this->m_firstName = firstName;
    }

    void setLastName(string lastName)
    {
        this->m_lastName = lastName;
    }

    string getFirstName()
    {
        return this->m_firstName;
    }

    string getLastName()
    {
        return this->m_lastName;
    }

private:
    string m_firstName;
    string m_lastName;
};

#endif /* __BASE_CLASS_H__ */