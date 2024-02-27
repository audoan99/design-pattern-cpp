/**
 * @author: Au Doan Ngoc
 * @date: Feb 27, 2024
 * @brief: Adapter Factory example
*/

#ifndef __ADAPTER_CLASS_H__
#define __ADAPTER_CLASS_H__

#include "base_class.h"

class UserAtoBAdapter : public IBackendB
{
public:
    UserAtoBAdapter() {};
    UserAtoBAdapter(UserA user)
    {
        this->mUser = user;

        // split first name and last name
        unsigned int splitPosition = user.getName().find_first_of(" ");

        if (splitPosition != string::npos)
        {
            this->mFirstName = user.getName().substr(0, splitPosition + 1);
            this->mLastName = user.getName().substr(splitPosition + 1,
                                user.getName().length() - this->mFirstName.length());
        }
    }

    void setFirstName(string firstName)
    {
        this->mFirstName = firstName;
    }

    void setLastName(string lastName)
    {
        this->mLastName = lastName;
    }

    string getFirstName()
    {
        return this->mFirstName;
    }

    string getLastName()
    {
        return this->mLastName;
    }

private:
    UserA mUser;
    string mFirstName;
    string mLastName;
};

#endif /* __ADAPTER_CLASS_H__ */
