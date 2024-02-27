/**
 * @author: Au Doan Ngoc
 * @date: Feb 27, 2024
 * @brief: Singleton pattern example
*/

#ifndef __BASE_CLASS_H__
#define __BASE_CLASS_H__

#include <mutex>
#include <string>

using namespace std;

class SingletonBase
{
public:
    string mData;

    static SingletonBase* getInstance(string data);

    static void releaseInstance();

private:
    SingletonBase(string data);

    static SingletonBase* mInstancePtr;
    static mutex mLock;

};

#endif /* __BASE_CLASS_H__ */