#ifndef _RouterImp_H_
#define _RouterImp_H_

#include "servant/Application.h"
#include "Router.h"

/**
 *
 *
 */
class RouterImp : public FireKeeper::Router
{
public:
    /**
     *
     */
    virtual ~RouterImp() {}

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
