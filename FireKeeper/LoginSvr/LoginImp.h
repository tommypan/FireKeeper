#ifndef _LoginImp_H_
#define _LoginImp_H_

#include "servant/Application.h"
#include "Login.h"

/**
 *
 *
 */
class LoginImp : public FireKeeper::Login
{
public:
    /**
     *
     */
    virtual ~LoginImp() {}

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
    virtual int Login(tars::TarsCurrentPtr current) { return 0;};

  /**
     *
     */
    virtual int Register(tars::TarsCurrentPtr current) { return 0;};

    long GenUID();
};
/////////////////////////////////////////////////////
#endif
