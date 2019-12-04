#ifndef _RoomAllocaterSvr_H_
#define _RoomAllocaterSvr_H_

#include <iostream>
#include "servant/Application.h"

using namespace tars;

/**
 *
 **/
class RoomAllocaterSvr : public Application
{
public:
    /**
     *
     **/
    virtual ~RoomAllocaterSvr() {};

    /**
     *
     **/
    virtual void initialize();

    /**
     *
     **/
    virtual void destroyApp();
};

extern RoomAllocaterSvr g_app;

////////////////////////////////////////////
#endif
