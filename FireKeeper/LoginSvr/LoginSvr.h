#ifndef _LoginSvr_H_
#define _LoginSvr_H_

#include <iostream>
#include "servant/Application.h"

using namespace tars;

/**
 *
 **/
class LoginSvr : public Application
{
public:
    /**
     *
     **/
    virtual ~LoginSvr() {};

    /**
     *
     **/
    virtual void initialize();

    /**
     *
     **/
    virtual void destroyApp();
};

extern LoginSvr g_app;

////////////////////////////////////////////
#endif
