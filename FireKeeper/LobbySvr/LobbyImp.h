#ifndef _LobbyImp_H_
#define _LobbyImp_H_

#include "servant/Application.h"
#include "Lobby.h"

/**
 *
 *
 */
class LobbyImp : public FireKeeper::Lobby
{
public:
    /**
     *
     */
    virtual ~LobbyImp() {}

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
