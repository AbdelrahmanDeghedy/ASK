#include <bits/stdc++.h>
#include "UserManager.h"
using namespace std;

UserManager :: UserManager () : last_ID (0)
{

}
User &UserManager :: getUser ()
{
    return user;
}
void UserManager :: accessSystem ()
{
    int choice;
    cout << "Menu:\n\t\t1: Login\n\t\t2: Sign up\n\nEnter number in range 1-2: ";
    cin >> choice;
    while (choice > 2 || choice < 1)
    {
        cout << "please enter a valid input: ";
        cin >> choice;
    }
   if (choice == 1)
        login ();
    else
        signup();
}
map <string, User> &UserManager :: getUsername_userObject ()
{
    return username_userObject;
}
void UserManager :: login ()
{
    User test_user;
    string username, pass;
    cout << "Enter username & password: ";
    cin >> username >> pass;
    while (!getUsername_userObject().count (username))
    {
        cout << "username is not exited, try again! ";
        cin >> username >> pass;
    }
    test_user.setUserName (username);
    test_user.setPass (pass);
    while (test_user.getPass() != getUsername_userObject ()[username].getPass())
    {
        cout << "password is wrong, try again! ";
        cin >> username >> pass;
        test_user.setUserName (username);
        test_user.setPass (pass);
    }
    test_user.setPass (pass);
    getUser () = test_user;
}
void UserManager :: signup ()
{

    string username;
    cout << "Enter username (no space): ";
    cin >> username;
    while (getUsername_userObject().count (username))
    {
        cout << "Username already exists!, enter a new one: ";
        cin >> username;
    }
    getUser ().setUserName (username);
    getUser ().readUser((++getLastID()));
    getUsername_userObject()[getUser().getUserName()] = getUser();
    saveData ();
}
Service UserManager :: getService ()
{
    return service;
}
void UserManager :: loadDataBase ()
{
    vector <string> lines;
    getUsername_userObject().clear();
    lines = getService().readFile ("users.txt");
    for (const auto & line : lines)
    {
        User user (line);
        getUsername_userObject ()[user.getUserName()] = user;
        getLastID() = max (getLastID(), user.getID());
    }
}
void UserManager :: saveData () //we save user by user
{
    string line = getUser().combine();
    vector <string> lines (1, line);
    getService ().writeFile ("users.txt", lines, 1);
}

void UserManager :: printUserIDs ()
{
    for (auto& m : getUsername_userObject())
    {
        cout << "ID : " << m.second.getID() << "\t\t" << "Name: " << m.second.getName() << "\n";
    }
}
int &UserManager :: getLastID ()
{
    return last_ID;
}
