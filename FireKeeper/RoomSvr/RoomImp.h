#ifndef _RoomImp_H_
#define _RoomImp_H_

#include "servant/Application.h"
#include "Room.h"

/**
 *
 *
 */
class RoomImp : public FireKeeper::Room
{
public:
    /**
     *
     */
    virtual ~RoomImp() {}

    /**
     *
     */
    virtual void initialize();

    /**
     *
     */
    virtual void destroy();

    /**
     *
     */
    virtual int EnterRoom(const std::vector<unsigned long>& uidList,tars::TarsCurrentPtr current);

    virtual int NewRoom(tars::TarsCurrentPtr current);

    virtual int DisposeRoom(tars::TarsCurrentPtr current);

    int LeaveRoom(unsigned long uid);
};
/////////////////////////////////////////////////////
#endif
