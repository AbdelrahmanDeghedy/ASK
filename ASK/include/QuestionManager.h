#ifndef QUESTIONMANAGER_H
#define QUESTIONMANAGER_H
#include "Questions.h"
#include "User.h"
class QuestionManager
{
public:
    QuestionManager();
    Questions& getQuestion ();
    map <int, Questions> getQuestionID_questionObject();
    map <int, vector <int>> getThreadQuestionID_childrenID ();
    int& getLast_ID();
    void loadDataBase ();
    void saveData ();
    Service getService();
    void printQuesToMe (const User&);
    void printQuesFromMe (const User&);
    void printFeed (const User&);
    void askQuestion ();
    void answerQuestion ();
    void deleteQuestion ();

private:
    Questions question;
    map <int, Questions> questionID_questionObject;
    map <int, vector <int>> threadQuestionID_childrenID;
    int last_ID;
    Service service;
    User user;

};

#endif // QUESTIONMANAGER_H