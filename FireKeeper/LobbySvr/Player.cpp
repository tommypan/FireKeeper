#include "Player.h"

Player::Player()
{
    Init();
}

Player::~Player()
{
    Uninit();
}

Player::Player(const Player& p)
{
    Copy(p);
}

void Player::operator=(const Player& p)
{
    Copy(p);
}

void Player::Init()
{
   _id = 0;
   _gold = 0;
   _nickName = "";
    _elo = 0;
    _grade = 0;
}

void Player::Uninit()
{
   _id = 0;
   _gold = 0;
   _nickName = "";
   _elo = 0;
   _grade = 0;
}

void Player::Copy(const Player& p)
{
   _id = p._id;
   _gold = p._gold;
   _nickName = p._nickName;
   _elo = p._elo;
   _grade = p._grade;
}
