#ifndef USERMANAGER_H
#define USERMANAGER_H
#include <bits/stdc++.h>
#include "User.h"

class UserManager
{
public:
    User &getUser ();
    UserManager ();
    Service getService();
    int &getLastID();
    void accessSystem ();
    void login ();
    void signup ();
    void loadDataBase ();
    void saveData ();
    map <string, User> &getUsername_userObject ();
    void printUserIDs ();
private:
    User user;
    map <string, User> username_userObject; //username
    int last_ID;
    Service service;
};

#endif // USERMANAGER_H

