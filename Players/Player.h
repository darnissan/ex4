#ifndef PLAYER_H_
#define PLAYER_H_
#include <stdlib.h>
#include <string>
#include <iostream>
#include "utilities.h"
class Player

{
protected:
    std::string m_playerName;
    int m_level;
    unsigned int m_force;
    unsigned int m_hp;
    unsigned int m_coins;

private:
public:
    virtual ~Player(){};
    virtual friend std::ostream &operator<<(std::ostream &os, const Player &card);
    virtual void increaseHp(unsigned int hp);
    virtual void increaseCoins(unsigned int coins);
    virtual void payCoins(unsigned int coins);
};

#endif