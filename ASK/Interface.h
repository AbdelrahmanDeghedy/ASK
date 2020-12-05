
#ifndef INTERFACE_H_INCLUDED
#define INTERFACE_H_INCLUDED
#include <bits/stdc++.h>
using namespace std;

class Interface
{
public:
  //  interface ();
    void showSubMenu ();
    void showMenu ();
    int getOption ();
    int getSubOption ();
    void setOption ();
    void setSubOption ();

private:
    int option;
    int sub_option;
};


#endif // INTERFACE_H_INCLUDED
