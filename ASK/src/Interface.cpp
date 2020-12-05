#include <bits/stdc++.h>
#include "Interface.h"
#include "User.h"
using namespace std;


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
    cout << "Enter number in range: 1 - 8 ";
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
    cout << "Enter number in range: 1 - 2 ";
    cin >> temp;
    while (temp > 2 || temp < 1)
    {
        cout << "Please, enter a valid input: ";
        cin >> temp;
    }
    sub_option = temp;  //legal to access private data member inside set member function
}
UserManager &Interface :: getUserManager ()
{
    return userManager;
}
void Interface :: run ()
{
    getUserManager().loadDataBase();
    getUserManager().accessSystem();
    while (1)
    {
        showMenu();
        setOption();
        if (getOption() == 6)
            getUserManager().printUserIDs();
        else if (getOption() == 8)
            break;
    }
    run();

}
