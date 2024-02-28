/**
 * @author: Au Doan Ngoc
 * @date: Feb 27, 2024
 * @brief: Facade Factory example
*/

#include <iostream>
#include "facade_class.h"

int main()
{
    Car car;

    cout << car.startCar() << endl;
    cout << car.stopCar() << endl;

    return 0;
}
