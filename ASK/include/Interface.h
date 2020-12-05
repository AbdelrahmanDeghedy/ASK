
#ifndef INTERFACE_H_INCLUDED
#define INTERFACE_H_INCLUDED
#include "UserManager.h"
using namespace std;
class Interface
{
public:
  //  interface ();
    void showMenu ();
    int getOption ();
    int getSubOption ();
    void setOption ();
    void setSubOption ();
    void run ();
    UserManager &getUserManager ();

private:
    int option;
    int sub_option;
    UserManager userManager;
};


#endif // INTERFACE_H_INCLUDED
