/**
 * @author: Au Doan Ngoc
 * @date: Feb 27, 2024
 * @brief: Singleton pattern example
*/

#include "base_class.h"

SingletonBase* SingletonBase::mInstancePtr = nullptr;
mutex SingletonBase::mLock;

SingletonBase::SingletonBase(string data)
{
    this->mData = data;
}

SingletonBase* SingletonBase::getInstance(string data)
{
    mLock.lock();

    if (mInstancePtr == nullptr)
    {
        mInstancePtr = new SingletonBase(data);
    }

    mLock.unlock();

    return mInstancePtr;
}

void SingletonBase::releaseInstance()
{
    delete mInstancePtr;
    mInstancePtr = nullptr;
}
