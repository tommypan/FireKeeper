#include "CRoom.h"

CRoom::CRoom()
{
    Init();
}

CRoom::~CRoom()
{
    Uninit();
}

CRoom::CRoom(const CRoom& p)
{
    Copy(p);
}

void CRoom::operator=(const CRoom& p)
{
    Copy(p);
}

void CRoom::Init()
{

}

void CRoom::Uninit()
{

}

void CRoom::Copy(const CRoom& p)
{

}
