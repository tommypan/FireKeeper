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

int LoginImp::LoginIn(const std::string& nickName,const std::string& pswd,tars::TarsCurrentPtr current)
{
    return 0;
}


int LoginImp::Register(const std::string& nickName,const std::string& pswd,tars::TarsCurrentPtr current)
{ 
    return 0;
}

long LoginImp::GenUID()
{
    return 1;
}
