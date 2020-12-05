#include <bits/stdc++.h>
#include "Questions.h"
using namespace std;

Questions :: Questions () : questionID (-1), fromID(-1), toID(-1), parentID(-1), isAnonymous (-1)
{

}
Questions :: Questions (string line)
{
    vector <string> lines = getService().stringSplitter (line, '.');
    questionID = getService().toInt (lines[0]);
    fromID = getService().toInt (lines[1]);
    toID = getService().toInt (lines[2]);
    parentID = getService ().toInt (lines[3]);
    question = lines[4];
    answer = lines[5];
}
string Questions :: combine ()
{
    stringstream s;
    string x;
    s << getQuestionID() << "," << getFromID() << "," << getToID() << "," << getParentID() << "," << getQuestion() << "," << getAnswer();
    s >> x;
    return x;
}
string Questions :: getQuestion () const
{
    return question;
}
string Questions :: getAnswer () const
{
    return answer;
}
int Questions :: getQuestionID () const
{
    return questionID;
}
int Questions :: getParentID ()
{
    return parentID;
}
bool Questions :: getIsAnonymous () const
{
    return isAnonymous;
}
Service Questions :: getService ()
{
    return service;
}
int Questions :: getFromID () const
{
    return fromID;
}
int Questions :: getToID () const
{
    return toID;
}
void Questions :: printToMeQues () const
{
    if (getQuestionID() != -1)
        cout << "Thread: ";
    cout << "Question ID: (" << getQuestionID() << ")\n";
    cout << "Question: " << getQuestion() << "\n";
    cout << "Answer: " << getAnswer();
}
void Questions :: printFromMeQues() const
{
    cout << "Question ID: (" << getQuestionID() << ") ";
    if (!getIsAnonymous ())
        cout << "!AQ";
    cout << "to user ID: " << getToID();
    cout << "Question: " << getQuestion() << "\n";
    if (getAnswer() == "")
        cout << "No answered yet!";
    else
        cout << "Answer: " << getAnswer();
}
void Questions :: printFeed () const
{
    if (getQuestionID() != -1)
        cout << "Thread: ";
    cout << "Question ID: (" << getQuestionID() << ") ";
    cout << "From user id:(" << getFromID() << " to user id(" << getToID() << ")\n";
    cout << "Question: " << getQuestion() << "\n";
    cout << "Answer: " << getAnswer();
}

