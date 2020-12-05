
#ifndef USER_H_INCLUDED
#define USER_H_INCLUDED
#include <bits/stdc++.h>
using namespace std;
class User
{
public:
  //  User ();
    int getID ();   //automatically calculated
    string getName ();
    string getUser ();
    string getPass ();
    vector <string> getQuestions ();
    void setID ();
    void setName ();
    void setUser ();
    void setPass ();
    bool allowAnon ();
    void login ();
    void signup ();

private:
    int ID;
    string name;
    string user;
    string pass;
    vector <string> questions;
};


#endif // USER_H_INCLUDED
