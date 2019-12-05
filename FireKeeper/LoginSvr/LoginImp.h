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
    virtual int Login(std::string nickName, std::string pswd,tars::TarsCurrentPtr current);

    /**
     *
     */
    virtual int Register(std::string nickName, std::string pswd,tars::TarsCurrentPtr current);


    unsigned long GenUID();
};
/////////////////////////////////////////////////////
#endif
