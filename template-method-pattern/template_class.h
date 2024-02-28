/**
 * @author: Au Doan Ngoc
 * @date: Feb 27, 2024
 * @brief: Template method example
*/

#ifndef __TEMPLATE_CLASS_H__
#define __TEMPLATE_CLASS_H__

#include <iostream>

using namespace std;

class RobotTemplate
{
public:
    virtual void start()
    {
        cout << "Starting ...\n";
    }

    virtual void getParts()
    {
        cout << "Getting parts ...\n";
    }

    virtual void assemble()
    {
        cout << "Assambling ...\n";
    }

    virtual void test()
    {
        cout << "Testing ...\n";
    }

    virtual void stop()
    {
        cout << "Stopping ...\n";
    }

    virtual string getName() = 0;

    void go()
    {
        start();
        getParts();
        assemble();
        test();
        stop();
    }
};

class RobotA : public RobotTemplate
{
public:
    RobotA() {};

    void getParts()
    {
        cout << "[A] Getting a carburetor ... \n";
    }

    void assemble()
    {
        cout << "[A] Installing the carburetor ... \n";
    }

    void test()
    {
        cout << "[A] Crunching a cookie ...\n";
    }

    string getName()
    {
        return "Robot A";
    }
};

class RobotB : public RobotTemplate
{
public:
    RobotB() {};

    void getParts()
    {
        cout << "[B] Getting a carburetor ... \n";
    }

    void assemble()
    {
        cout << "[B] Installing the carburetor ... \n";
    }

    void test()
    {
        cout << "[B] Crunching a cookie ...\n";
    }

    string getName()
    {
        return "Robot B";
    }
};

#endif /* __TEMPLATE_CLASS_H__ */
