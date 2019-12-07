#include "SSPrxCallback.h"
#include "Match.h"

using namespace tars;

SSPrxCallback::SSPrxCallback()
{
    Init();
}

SSPrxCallback::~SSPrxCallback()
{
    Uninit();
}

SSPrxCallback::SSPrxCallback(const SSPrxCallback& p)
{
    Copy(p);
}

void SSPrxCallback::operator=(const SSPrxCallback& p)
{
    Copy(p);
}

void SSPrxCallback::Init()
{
}

void SSPrxCallback::Uninit()
{
}

void SSPrxCallback::Copy(const SSPrxCallback& p)
{
}




void MatchCallback::callback_Dotransmit(tars::Int32 ret,ClientProto::PKG pkg)
{

}

void MatchCallback::callback_Dotransmit_exception(tars::Int32 ret)
{

}