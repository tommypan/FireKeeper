#ifndef _MatchImp_H_
#define _MatchImp_H_

#include "servant/Application.h"
#include "Match.h"

/**
 *
 *
 */
class MatchImp : public FireKeeper::Match
{
public:
    /**
     *
     */
    virtual ~MatchImp() {}

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
    virtual int AddInMatchList(unsigned long uid,tars::TarsCurrentPtr current);

   /**
     *
     */
    virtual int Dotransmit(const ClientProto::PKG& pkg,tars::TarsCurrentPtr current);

    void DoMatch();//遍历所有的进行匹配
};
/////////////////////////////////////////////////////
#endif
