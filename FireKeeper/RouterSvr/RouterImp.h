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
     *发
     */
    virtual int PushMessage2Client(long uid,const ClientProto::PKG& pkg,tars::TarsCurrentPtr current);
};
/////////////////////////////////////////////////////
#endif
