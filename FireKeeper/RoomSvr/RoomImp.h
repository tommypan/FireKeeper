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
    virtual int test(tars::TarsCurrentPtr current) { return 0;};
};
/////////////////////////////////////////////////////
#endif
