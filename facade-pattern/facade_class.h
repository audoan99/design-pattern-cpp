/**
 * @author: Au Doan Ngoc
 * @date: Feb 27, 2024
 * @brief: Facade Factory example
*/

#ifndef __FACADE_CLASS_H__
#define __FACADE_CLASS_H__

#include "base_class.h"

class Car
{
public:
    string startCar()
    {
        engine.start();
        lights.turnOn();

        return "Car is ready to drive";
    }

    string stopCar()
    {
        lights.turnOff();
        engine.stop();

        return "Car has stopped";
    }

private:
    Engine engine;
    Lights lights;
};

#endif /* __FACADE_CLASS_H__ */
