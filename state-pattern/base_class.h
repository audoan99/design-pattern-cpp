/**
 * @author: Au Doan Ngoc
 * @date: Feb 27, 2024
 * @brief: State pattern example
*/

#ifndef __BASE_CLASS_H__
#define __BASE_CLASS_H__

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class StatePattern
{
public:
    virtual void handle() = 0;
};

class RedState : public StatePattern
{
public:
    void handle() override
    {
        cout << "Traffic light is red\n";
    }
};

class YellowState : public StatePattern
{
public:
    void handle() override
    {
        cout << "Traffic light is yellow\n";
    }
};

class GreenState : public StatePattern
{
public:
    void handle() override
    {
        cout << "Traffic light is green\n";
    }
};

class TrafficLight
{
public:
    TrafficLight()
    {
        this->state = new RedState();
    }

    void setState(StatePattern* newState)
    {
        delete this->state;
        this->state = newState; 
    }

    void change()
    {
        this->state->handle();
    }

private:
    StatePattern *state;
};

#endif /* __BASE_CLASS_H__ */