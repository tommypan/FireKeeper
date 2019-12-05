#include "LobbyImp.h"
#include "servant/Application.h"

using namespace std;

//////////////////////////////////////////////////////
void LobbyImp::initialize()
{
    //initialize servant here:
    //...
}

//////////////////////////////////////////////////////
void LobbyImp::destroy()
{
    //destroy servant here:
    //...
}


int LobbyImp::GetPlayerByUID(unsigned long uid,const PlayerData & player,tars::TarsCurrentPtr current)
{
    return 0;
}



int LobbyImp::Dotransmit(const ClientProto::PKG& pkg,tars::TarsCurrentPtr current)
{
    return 0;
}
