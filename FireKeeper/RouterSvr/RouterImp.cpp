#include "RouterImp.h"
#include "servant/Application.h"
#include "cs.h"

using namespace std;

//////////////////////////////////////////////////////
void RouterImp::initialize()
{
    //initialize servant here:
    //...
}

//////////////////////////////////////////////////////
void RouterImp::destroy()
{
    //destroy servant here:
    //...
    //MatchCallback callback = new MatchCallback();
    //xx->async__Dotransmit(callback,ClientProto::PKG pkg)
}

int RouterImp::PushMessage2Client(long uid,const ClientProto::PKG& pkg,tars::TarsCurrentPtr current)
{ 
    return 0;
};