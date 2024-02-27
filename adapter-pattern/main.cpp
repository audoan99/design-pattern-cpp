/**
 * @author: Au Doan Ngoc
 * @date: Feb 27, 2024
 * @brief: Adapter Factory example
*/

#include <iostream>
#include "adapter_class.h"

int main()
{
    UserA testA;
    testA.setName("Au Doan");
    cout << "Full Name: " << testA.getName() << endl;

    UserAtoBAdapter testB(testA);
    cout << "First Name: " << testB.getFirstName() << "and Last Name: "
            <<  testB.getLastName() << endl;

    return 0;
}
