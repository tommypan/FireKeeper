#include "MatchImp.h"
#include "servant/Application.h"

using namespace std;

//////////////////////////////////////////////////////
void MatchImp::initialize()
{
    //initialize servant here:
    //...
}

//////////////////////////////////////////////////////
void MatchImp::destroy()
{
    //destroy servant here:
    //...
}

int MatchImp::AddInMatchList(unsigned long uid,tars::TarsCurrentPtr current)
{ 
    return 0;
}

int MatchImp::Dotransmit(const ClientProto::PKG& pkg,tars::TarsCurrentPtr current)
{ 
    return 0;
}

void MatchImp::DoMatch()
{

}
