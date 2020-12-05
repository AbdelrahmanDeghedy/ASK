#include <bits/stdc++.h>
#include "Interface.h"
using namespace std;

void Interface :: showSubMenu ()
{
    cout << "Menu:\n\t\t1: Login\n\t\t2: Sign up\n\n";
}
void Interface :: showMenu ()
{
    cout << "\t1: Print Questions To Me\n";
    cout << "\t2: Print Questions From Me\n";
    cout << "\t3: Answer Question\n";
    cout << "\t4: Delete Question\n";
    cout << "\t5: Ask Question\n";
    cout << "\t6: List System Users\n";
    cout << "\t7: Feed\n";
    cout << "\t8: Logout\n\n";
}
int Interface :: getOption ()
{
    return option;
}
int Interface :: getSubOption ()
{
    return sub_option;
}
void Interface :: setOption ()
{
    int temp;
    cout << "Enter number in range: 1 - 8";
    cin >> temp;
    while (temp > 8 || temp < 1)
    {
        cout << "Please, enter a valid input: ";
        cin >> temp;
    }
    option = temp;
}
void Interface :: setSubOption ()
{
    int temp;
    cout << "Enter number in range: 1 - 2";
    cin >> temp;
    while (temp > 2 || temp < 1)
    {
        cout << "Please, enter a valid input: ";
        cin >> temp;
    }
    sub_option = temp;
}

