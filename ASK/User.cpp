#include <bits/stdc++.h>
#include "User.h"

using namespace std;
string User :: getName ()
{
    return User.name;
}
string user :: getuser ()
{
    return User.user;
}
string User :: getPass ()
{
    return User.pass;
}
vector <string> User :: getQuestions ()
{
    return User.questions;
}
void User :: setName ()
{
    cout << "Enter Your Name: ";
    getline (cin, name, '\n');
}
void User :: setUser ()
{
    cout << "Enter the Username (no spaces): ";
    cin >> user;
}
void User :: setPass ()
{
    cout << "Enter Your Password: ";
    cin >> pass;
}
bool User :: allowAnon ()
{
    cout << "Allow Anon Questions ? (0 or 1): "
}
void User :: login ()
{
    setUser ();
    setPass ();
}
void User :: signUp ()
{
    setUser ();
    setPass ();
    setName ();
    setEmail ();
    allowAnon ();
}

