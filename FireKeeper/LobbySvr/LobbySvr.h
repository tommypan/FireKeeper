#ifndef _LobbySvr_H_
#define _LobbySvr_H_

#include <iostream>
#include "servant/Application.h"

using namespace tars;

/**
 *
 **/
class LobbySvr : public Application
{
public:
    /**
     *
     **/
    virtual ~LobbySvr() {};

    /**
     *
     **/
    virtual void initialize();

    /**
     *
     **/
    virtual void destroyApp();
};

extern LobbySvr g_app;

////////////////////////////////////////////
#endif
