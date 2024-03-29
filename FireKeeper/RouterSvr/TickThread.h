#ifndef __ROUTER_PUSH_THREAD_H
#define __ROUTER_PUSH_THREAD_H

#include "servant/Application.h"

class PushUser
{
public:
    static map<string, TarsCurrentPtr> pushUser;
    static TC_ThreadMutex mapMutex;
};

/**
处理超时掉线玩家
**/
class TickThread : public TC_Thread, public TC_ThreadLock
{
public:
    TickThread():_bTerminate(false),_tLastPushTime(0),_tInterval(10),_iId(0){}

    virtual void run();

    void terminate();

    void setPushInfo(const string &sInfo);

private:
    bool _bTerminate;
    time_t _tLastPushTime;
    time_t _tInterval;
    unsigned int _iId;
    string _sPushInfo;
};
#endif
