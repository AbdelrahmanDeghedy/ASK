#include <bits/stdc++.h>
#include "GeneralService.h"
using namespace std;

vector <string> readFile (string fileName)
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
        if (line.size() != 0)
            continue;
        lines.push_back (line);
    }
    file.close();
    return lines;
}

void writeFile (string fileName, const vector <string> &content, bool appned = 0)
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
vector <string> stringSplitter (string s, char delimiter)
{
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
       }
    }
    return vec;
}
int toInt (string x)
{
    int y;
    stringstream s;
    s << x;
    s >> y;
    return y;
}
