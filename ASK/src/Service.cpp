#include <bits/stdc++.h>
#include "Service.h"
using namespace std;

vector <string> Service :: readFile (const string &fileName)
{
    vector <string> lines;
    ifstream file (fileName);
    if (!file)
    {
        cout << "Error opening file!";
        return lines;
    }
    string line;
    while (getline (file, line))
    {
        if (line.size() == 0)
            continue;
        lines.push_back (line);
    }
    file.close();
    return lines;
}

void Service :: writeFile (string fileName, const vector <string> &content, bool appned)
{
    auto state = ios :: trunc;
    if (appned)
        state = ios :: app;
    ofstream file (fileName, state);
    if (!file)
    {
        cout << "can't open file!";
        return;
    }
    for (const auto & line : content)
        file << line << "\n";
    file.close();
}
vector <string> Service :: stringSplitter (string s, char delimiter)
{
    int index;
    vector <string> vec;
    string x;
    for (int i = 0; i < (int) s.length(); i++)
    {
        x += s[i];
        if (s[i] == delimiter)
        {
            x.erase (x.length() - 1, 1);
            vec.push_back (x);
            x.clear();
            index = i;  //index of last delimiter
       }
    }
    for (int i = index + 1; i < (int) s.size(); i++)    // to add last part after the last delimiter
        x += s[i];
    vec.push_back (x);

    return vec;
}
int Service :: toInt (string& x)
{
    int y;
    stringstream s;
    s << x;
    s >> y;
    return y;
}
