#ifndef _RouterSvr_H_
#define _RouterSvr_H_

#include <iostream>
#include "servant/Application.h"

using namespace tars;

/**
 *
 **/
class RouterSvr : public Application
{
public:
    /**
     *
     **/
    virtual ~RouterSvr() {};

    /**
     *
     **/
    virtual void initialize();

    /**
     *
     **/
    virtual void destroyApp();
};

extern RouterSvr g_app;

////////////////////////////////////////////
#endif
