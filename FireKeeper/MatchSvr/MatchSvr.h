#ifndef _MatchSvr_H_
#define _MatchSvr_H_

#include <iostream>
#include "servant/Application.h"

using namespace tars;

/**
 *
 **/
class MatchSvr : public Application
{
public:
    /**
     *
     **/
    virtual ~MatchSvr() {};

    /**
     *
     **/
    virtual void initialize();

    /**
     *
     **/
    virtual void destroyApp();
};

extern MatchSvr g_app;

////////////////////////////////////////////
#endif
