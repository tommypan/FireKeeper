#include "RouterPushThread.h"
#include <arpa/inet.h>

map<string, TarsCurrentPtr> PushUser::pushUser;
TC_ThreadMutex PushUser::mapMutex;


void RouterPushThread::terminate(void)
{
    _bTerminate = true;
    {
        tars::TC_ThreadLock::Lock sync(*this);
        notifyAll();
    }
}

void RouterPushThread::setPushInfo(const string &sInfo)
{
      unsigned int iBuffLength = htonl(sInfo.size()+8);
    unsigned char * pBuff = (unsigned char*)(&iBuffLength);

    _sPushInfo = "";
    for (int i = 0; i<4; ++i)
    {
        _sPushInfo += *pBuff++;
    }

    unsigned int iRequestId = htonl(_iId);
    unsigned char * pRequestId = (unsigned char*)(&iRequestId);

    for (int i = 0; i<4; ++i)
    {
        _sPushInfo += *pRequestId++;
    }

    _sPushInfo += sInfo;
}

void RouterPushThread::run(void)
{
    time_t iNow;

    setPushInfo("hello world");

    while (!_bTerminate)
    {
        iNow =  TC_TimeProvider::getInstance()->getNow();

        if(iNow - _tLastPushTime > _tInterval)
        {
            _tLastPushTime = iNow;

            (PushUser::mapMutex).lock();
            for(map<string, TarsCurrentPtr>::iterator it = (PushUser::pushUser).begin(); it != (PushUser::pushUser).end(); ++it)
            {
                (it->second)->sendResponse(_sPushInfo.c_str(), _sPushInfo.size());
                LOG->debug() << "sendResponse: " << _sPushInfo.size() <<endl;
            }
            (PushUser::mapMutex).unlock();
        }

        {
            TC_ThreadLock::Lock sync(*this);
            timedWait(1000);
        }
    }
}
