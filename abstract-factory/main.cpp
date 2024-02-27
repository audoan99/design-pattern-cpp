/**
 * @author: Au Doan Ngoc
 * @date: Feb 27, 2024
 * @brief: Astract Factory example
*/

#include <iostream>
#include "factory_class.h"

int main()
{
    LightThemeFactory* lightTheme = new LightThemeFactory();
    IButton* ptr =  lightTheme->createButton();
    IScrollBar* ptr2 = lightTheme->createScrollBar();

    cout << "Button: " << ptr->description() << " - ScrollBar: " << ptr2->description() << endl;

    DarkThemeFactory* darkTheme = new DarkThemeFactory();
    ptr =  darkTheme->createButton();
    ptr2 = darkTheme->createScrollBar();

    cout << "Button: " << ptr->description() << " - ScrollBar: " << ptr2->description() << endl;

    delete lightTheme;
    lightTheme = nullptr;
    delete darkTheme;
    darkTheme = nullptr;
    
    delete ptr;
    ptr = nullptr;

    delete ptr2;
    ptr2 = nullptr;

    return 0;
}
