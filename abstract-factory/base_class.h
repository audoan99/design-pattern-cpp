/**
 * @author: Au Doan Ngoc
 * @date: Feb 27, 2024
 * @brief: Astract Factory example
*/

#ifndef __BASE_CLASS_H__
#define __BASE_CLASS_H__

#include <string>

using namespace std;

class IButton
{
public:
    virtual string description() = 0;
};

class IScrollBar
{
public:
    virtual string description() = 0;
};

class LightButton : public IButton
{
    string description()
    {
        return "light IButton";
    }
};

class DarkButton : public IButton
{
    string description()
    {
        return "dark IButton";
    }
};

class LightScollBar : public IScrollBar
{
public:
    string description()
    {
        return "light IScrollBar";
    }
};

class DarkScollBar : public IScrollBar
{
public:
    string description()
    {
        return "dark IScrollBar";
    }
};

#endif /* __BASE_CLASS_H__ */