/**
 * @author: Au Doan Ngoc
 * @date: Feb 27, 2024
 * @brief: Facade Factory example
*/

#ifndef __BASE_CLASS_H__
#define __BASE_CLASS_H__

#include <string>

using namespace std;

class Engine
{
public:
    string start()
    {
        return "Engine started";
    }

    string stop()
    {
        return "Engine stopped";
    }
};

class Lights
{
public:
    string turnOn()
    {
        return "Lights on";
    }

    string turnOff()
    {
        return "Lights off";
    }
};

#endif /* __BASE_CLASS_H__ */