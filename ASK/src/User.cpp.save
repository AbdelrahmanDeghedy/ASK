#include <bits/stdc++.h>
#include "User.h"
using namespace std;

User :: User () : ID (-1), allowAnonQuestions (-1)
{

}
User :: User (const string &str)
{
    vector <string> pieces = getService().stringSplitter (str, ',');
    ID = (getService().toInt (pieces[0]));
    name = pieces[1];
    pass = pieces[2];
    user = pieces[3];
    email = pieces[4];
    allowAnonQuestions = (getService().toInt (pieces[5]));
}
int User :: getID ()
{
    return ID;
}

string User :: getName ()
{
    return name;
}
string User :: getUserName ()
{
    return user;
}
string User :: getPass ()
{
    return pass;
}

void User :: setName (string name)
{
    this->name = name;
}
void User :: setUserName (string user)
{
    this->user = user;
}
void User :: setPass (string pass)
{
    this->pass = pass;
}
bool User :: getAnon ()
{
    return allowAnonQuestions;
}
void User :: setAnon (bool allowAnonQuestions)
{
    this->allowAnonQuestions = allowAnonQuestions;
}
string User :: getEmail ()
{
    return email;
}
void User :: setEmail (string email)
{
    this->email = email;
}
string User :: combine ()
{
    string x;
    stringstream s;
    s << getID() << "," << getUserName() << "," << getPass() << "," << getName() << "," << getEmail() << "," << getAnon();
    s >> x;
    return x;
}
vector <int> User :: getQuestion () const
{
    return questions_id;
}

bool User :: operator== (User& RHS)
{
    if (this->getAnon () != RHS.getAnon () || this->getEmail() != RHS.getEmail() || this->getID() != RHS.getID() || this->getName() != RHS.getName() || this->getPass() != RHS.getPass())
        return false;
    return true;
}
Service User :: getService ()
{
    return generalService;
}
void User :: readUser(int last_ID)
{
    string pass, email, name;
    bool anon;
    setID (last_ID);
    cout << "Enter your name: ";
    cin.ignore();
    getline (cin, name, '\n');
    setName (name);
    cout << "Enter password: ";
    cin >> pass;
    setPass(pass);
    cout << "Enter Email: ";
    cin >> email;
    setEmail (email);
    cout << "Allow Anonymous Questions? (0 or 1): ";
    cin >> anon;
    while (cin.fail())
    {
        cout << "please, enter 0 or 1 only: ";
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cin >> anon;
    }
    setAnon (anon);
}
void User :: setID (int ID)
{
    this->ID = ID;
}
map <int, vector <int>> User :: getQuestionID_questionIDsThread () const
{
    return questionID_questionIDsThread;
}
