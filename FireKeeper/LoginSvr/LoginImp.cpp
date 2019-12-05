#include "LoginImp.h"
#include "servant/Application.h"

using namespace std;

//////////////////////////////////////////////////////
void LoginImp::initialize()
{
    //initialize servant here:
    //...
}

//////////////////////////////////////////////////////
void LoginImp::destroy()
{
    //destroy servant here:
    //...
}

int LoginImp::Login(std::string nickName, std::string pswd,tars::TarsCurrentPtr current)
{
    return 0;
}


int LoginImp::Register(std::string nickName, std::string pswd,tars::TarsCurrentPtr current)
{ 
    return 0;
}

unsigned long LoginImp::GenUID()
{
    return 1;
}