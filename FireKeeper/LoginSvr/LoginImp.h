#ifndef _LoginImp_H_
#define _LoginImp_H_

#include "servant/Application.h"
#include "Login.h"
#include <iostream>
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
    virtual int LoginIn(const std::string& nickName, const std::string& pswd,tars::TarsCurrentPtr current);

    /**
     *
     */
    virtual int Register(const std::string& nickName, const std::string& pswd,tars::TarsCurrentPtr current);


    long GenUID();
};
/////////////////////////////////////////////////////
#endif
