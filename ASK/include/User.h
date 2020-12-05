
#ifndef USER_H_INCLUDED
#define USER_H_INCLUDED
#include <bits/stdc++.h>
#include "Service.h"
using namespace std;

class User
{
public:
    User(); //default constructor
    User (const string &); //id name pass user email anon
    int getID ();   //automatically calculated
    string getName ();
    string getUserName ();
    string getPass ();
    bool getAnon ();
    string getEmail ();
    int getUserCnt ();
    vector <int> getQuestion () const;
    map <int, vector <int>> getQuestionID_questionIDsThread () const;
    Service getService ();
    void setName (string);
    void setUserName (string);
    void setPass (string);
    void setAnon (bool = 1);
    void setEmail (string);
    void setID (int);
    string combine ();
    void readUser(int);

    bool operator== (User& RHS);
    inline bool operator!= (User& RHS)
    {
        return !(*this == RHS);
    }

private:
    //User ();
    int ID;
    string name;
    string user;
    string pass;
    string email;
    bool allowAnonQuestions;
    vector <int> questions_id;      //questions_IDs from me
    map <int, vector <int>> questionID_questionIDsThread;
    Service generalService;
};


#endif // USER_H_INCLUDED
