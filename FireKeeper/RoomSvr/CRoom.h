#pragma once

class CRoom
{

public:
    CRoom();
    ~CRoom();
    CRoom(const CRoom& pl);
    void operator=(const CRoom& p);
private:
    void Init();
    void Uninit();
    void Copy(const CRoom& p);
}