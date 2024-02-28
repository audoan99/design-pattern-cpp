/**
 * @author: Au Doan Ngoc
 * @date: Feb 27, 2024
 * @brief: Observer pattern example
*/

#ifndef __BASE_CLASS_H__
#define __BASE_CLASS_H__

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class IObserver
{
public:
    virtual void update(string operation, string record) = 0;
};

class ISubject
{
public:
    virtual void registerObserver(IObserver* o) = 0;
    virtual void removeObserver(IObserver* o) = 0;
    virtual void notifyObservers() = 0;
};

class Database : public ISubject
{
public:
    Database() {}

    void registerObserver(IObserver* o)
    {
        mObserver.push_back(o);
    }

    void removeObserver(IObserver* o)
    {
        auto observer = find(mObserver.begin(), mObserver.end(), o);
        if (observer != mObserver.end())
        {
            mObserver.erase(observer, observer + 1);
        }
    }

    void notifyObservers()
    {
        for (auto &o : mObserver)
        {
            o->update(mOperation, mRecord);
        }
    }

    void editRecord(string operation, string record)
    {
        this->mOperation = operation;
        this->mRecord = record;

        notifyObservers();
    }

private:
    vector<IObserver*> mObserver;
    string mOperation;
    string mRecord;
};


class Client : public IObserver
{
public:
    Client()
    {
        idx = ++couter;
    }

    void update(string operation, string record)
    {
        cout << "Client" << idx << " - new data: " << operation << ", "<< record << endl;
    }

    static unsigned int couter;
private:
    unsigned int idx;
};

unsigned int Client::couter = 0;

#endif /* __BASE_CLASS_H__ */