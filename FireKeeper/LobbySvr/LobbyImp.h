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
    virtual int GetPlayerByUID(long uid,const ClientProto::PlayerData & player,tars::TarsCurrentPtr current);

      /**
     *
     */
    virtual int Dotransmit(const ClientProto::PKG& pkg,tars::TarsCurrentPtr current);
};
/////////////////////////////////////////////////////
#endif
