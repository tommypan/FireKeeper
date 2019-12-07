#pragma once
#include <iostream>

class SSPrxCallback
{

public:
    SSPrxCallback();
    ~SSPrxCallback();
    SSPrxCallback(const SSPrxCallback& p);
    void operator=(const SSPrxCallback& p);
private:
    void Init();
    void Uninit();
    void Copy(const SSPrxCallback& p);

private:
};

class MatchCallback : public MatchPrxCallback
{
    public:
    MatchCallback(){};


    virtual void callback_Dotransmit(tars::Int32 ret,ClientProto::PKG pkg);

    virtual void callback_Dotransmit_exception(tars::Int32 ret);
}