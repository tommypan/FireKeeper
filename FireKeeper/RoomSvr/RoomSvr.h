#ifndef _RoomSvr_H_
#define _RoomSvr_H_

#include <iostream>
#include "servant/Application.h"

using namespace tars;

/**
 *
 **/
class RoomSvr : public Application
{
public:
    /**
     *
     **/
    virtual ~RoomSvr() {};

    /**
     *
     **/
    virtual void initialize();

    /**
     *
     **/
    virtual void destroyApp();
};

extern RoomSvr g_app;

////////////////////////////////////////////
#endif
