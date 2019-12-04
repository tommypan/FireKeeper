#ifndef _RoomAllocaterImp_H_
#define _RoomAllocaterImp_H_

#include "servant/Application.h"
#include "RoomAllocater.h"

/**
 *
 *
 */
class RoomAllocaterImp : public FireKeeper::RoomAllocater
{
public:
    /**
     *
     */
    virtual ~RoomAllocaterImp() {}

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
