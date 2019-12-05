#include "RoomImp.h"
#include "servant/Application.h"

using namespace std;

//////////////////////////////////////////////////////
void RoomImp::initialize()
{
    //initialize servant here:
    //...
}

//////////////////////////////////////////////////////
void RoomImp::destroy()
{
    //destroy servant here:
    //...
}

int RoomImp::EnterRoom(const std::vector<long>& uidList,tars::TarsCurrentPtr current)
{
    return 0;
}

int RoomImp::NewRoom(tars::TarsCurrentPtr current)
{
    return 0;
}

int RoomImp::DisposeRoom(tars::TarsCurrentPtr current)
{
    return 0;
}

int RoomImp::LeaveRoom(long uid)
{
    return 0;
}
