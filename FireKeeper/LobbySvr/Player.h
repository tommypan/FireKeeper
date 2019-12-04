#pragma once
#include <iostream>

class Player
{

public:
    Player();
    ~Player();
    Player(const Player& pl);
    void operator=(const Player& p);
private:
    void Init();
    void Uninit();
    void Copy(const Player& p);

private:
   unsigned long _id;
   unsigned long _gold;
   std::string _nickName;
   unsigned int _elo;
   unsigned char _grade;
}