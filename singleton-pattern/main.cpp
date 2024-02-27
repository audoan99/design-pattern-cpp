/**
 * @author: Au Doan Ngoc
 * @date: Feb 27, 2024
 * @brief: Singleton pattern example
*/

#include <iostream>
#include "base_class.h"

int main()
{
    /* Case 1: receive same object and data print is same */

    string data = "Singleton pattern example";
    SingletonBase *ptr1 = SingletonBase::getInstance(data);

    cout << "[Case 1] Data test: " << ptr1->mData << endl;

    data = "test";
    SingletonBase *ptr2 = SingletonBase::getInstance(data);

    cout << "[Case 1] Data test: " << ptr2->mData << endl;

    /* Case 2: delete ptr and get new instace */
    SingletonBase::releaseInstance();

    data = "test";
    SingletonBase *ptr3 = SingletonBase::getInstance(data);

    cout << "[Case 2] Data test: " << ptr3->mData << endl;

    return 0;
}