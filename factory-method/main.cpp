/**
 * @author: Au Doan Ngoc
 * @date: Feb 27, 2024
 * @brief: Factory method example
*/

#include <iostream>
#include "factory_class.h"

int main()
{
    IBase *ptr = DbConnectionFactory::createInstance(eConnectionType::CONNECTION_TYPE_ORACLE);
    cout << "Test: " << ptr->description() << endl;

    delete ptr;
    ptr = nullptr;

    return 0;
}