#ifndef QUESTIONS_H
#define QUESTIONS_H
#include <bits/stdc++.h>
#include "Service.h"
using namespace std;

class Questions
{
public:
    Questions();
    Questions (string);
    string getQuestion () const;
    string getAnswer () const;
    int getQuestionID () const;
    int getParentID ();
    bool getIsAnonymous () const;
    Service getService ();
    string combine ();
    int getFromID () const;
    int getToID () const;
    void printToMeQues () const;
    void printFromMeQues () const;
    void printFeed () const;

private:
    string question;
    string answer;
    int questionID;
    int fromID; //user ID
    int toID;
    int parentID;   //-1 if it's the parent question
    bool isAnonymous;
    Service service;
};

#endif // QUESTIONS_H
