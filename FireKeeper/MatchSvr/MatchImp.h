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
    virtual int AddInMatchList(tars::TarsCurrentPtr current,unsigned long uid) { return 0;};

    void DoMatch();//遍历所有的进行匹配
};
/////////////////////////////////////////////////////
#endif
