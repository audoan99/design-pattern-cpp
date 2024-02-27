/**
 * @author: Au Doan Ngoc
 * @date: Feb 27, 2024
 * @brief: Astract Factory example
*/

#ifndef __FACTORY_CLASS_H__
#define __FACTORY_CLASS_H__

#include "base_class.h"

class WidgetFactory
{
public:
    virtual IScrollBar* createScrollBar()=0;
    virtual IButton* createButton()=0;
};

class LightThemeFactory : public WidgetFactory
{
public:
    IScrollBar* createScrollBar()
    {
        return new LightScollBar();
    }

    IButton* createButton()
    {
        return new LightButton();
    }
};

class DarkThemeFactory : public WidgetFactory
{
public:
    IScrollBar* createScrollBar()
    {
        return new DarkScollBar();
    }

    IButton* createButton()
    {
        return new DarkButton();
    }
};

#endif /* __FACTORY_CLASS_H__ */
