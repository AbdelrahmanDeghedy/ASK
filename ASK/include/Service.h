#ifndef SERVICE_H
#define SERVICE_H
#include <bits/stdc++.h>
using namespace std;

class Service
{
public:
    vector <string> stringSplitter (string s, char delimiter);
    void writeFile (string fileName, const vector <string> &content, bool appned = 0);
    vector <string> readFile (const string &fileName);
    int toInt (string&);


};

#endif // SERVICE_H
