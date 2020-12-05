#ifndef GENERALSERVICE_H
#define GENERALSERVICE_H
#include <bits/stdc++.h>
using namespace std;

class GeneralService
{
public:
    vector <string> stringSplitter (string s, char delimiter);
    void writeFile (string fileName, const vector <string> &content, bool appned = 0);
    vector <string> readFile (string fileName);
    int toInt (string x);

private:

};

#endif // GENERALSERVICE_H
