#include <bits/stdc++.h>
#include "QuestionManager.h"
using namespace std;

QuestionManager :: QuestionManager () : last_ID (0)
{
}
map <int, Questions> QuestionManager :: getQuestionID_questionObject()
{
    return questionID_questionObject;
}

map <int, vector <int>> QuestionManager :: getThreadQuestionID_childrenID()
{
    return threadQuestionID_childrenID;
}
int& QuestionManager :: getLast_ID ()
{
    return last_ID;
}
void QuestionManager :: loadDataBase ()
{
    vector <string> lines;
    getQuestionID_questionObject ().clear();
    getThreadQuestionID_childrenID().clear();
    lines = getService().readFile ("questions.txt");
    for (const auto& line : lines)
    {
        Questions question (line);
        getLast_ID() = max (getLast_ID(), question.getQuestionID());
        getQuestionID_questionObject()[getLast_ID()] = question;
        if (question.getParentID() == -1)   //if there is no parent question
            getThreadQuestionID_childrenID()[question.getQuestionID()].push_back (question.getQuestionID());
        else
            getThreadQuestionID_childrenID()[question.getParentID()].push_back (question.getQuestionID());
    }
}
void QuestionManager :: saveData ()
{
    vector <string> lines;
    for (auto& line : getQuestionID_questionObject())
        lines.push_back (line.second.combine());
    getService().writeFile("questions.txt", lines, 0);
}
Service QuestionManager :: getService ()
{
    return service;
}
void QuestionManager :: printQuesToMe (const User &user)
{
    if (user.getQuestionID_questionIDsThread().size() == 0)
        cout << "No questions!";
    for (const auto & m : user.getQuestionID_questionIDsThread())
    {
        for (const auto& s : m.second)
        {
            const Questions &question = getQuestionID_questionObject ()[s];
            question.printToMeQues();
        }
    }
}
void QuestionManager :: printQuesFromMe (const User& user)
{
    if (user.getQuestion().size() == 0)
        cout << "No questions!";
    for (const auto& m : user.getQuestion())
    {
        const Questions &question = getQuestionID_questionObject () [m];
        question.printFromMeQues();
    }
}
void QuestionManager :: printFeed (const User& user)
{
    for (const auto& m : getQuestionID_questionObject())
    {
        const Questions& question = m.second;
        if (question.getQuestion() == "")
            continue;
        question.printFeed ();
    }
}
void QuestionManager :: askQuestion ()
{

}
void QuestionManager :: answerQuestion ()
{

}
void QuestionManager :: deleteQuestion ()
{

}