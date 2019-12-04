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
    virtual int GetPlayerByUID(tars::TarsCurrentPtr current,Player & player,unsigned long uid) { return 0;};
};
/////////////////////////////////////////////////////
#endif
