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
    virtual int test(tars::TarsCurrentPtr current) { return 0;};
};
/////////////////////////////////////////////////////
#endif
