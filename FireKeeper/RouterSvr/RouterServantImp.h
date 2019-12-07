#ifndef _RouterServantImp_H_
#define _RouterServantImp_H_

#include "servant/Application.h"

/**
 *
 *
 */
class RouterServantImp : public  tars::Servant
{
public:
    /**
     *
     */
    virtual ~RouterServantImp() {}

    /**
     *
     */
    virtual void initialize();

    /**
     *
     */
    virtual void destroy();


    /**
     *收
     */
    int doRequest(tars::TarsCurrentPtr current, vector<char>& response);

    /**
     *重载Servant的doClose方法
     */
    int doClose(tars::TarsCurrentPtr current);

};
/////////////////////////////////////////////////////
#endif