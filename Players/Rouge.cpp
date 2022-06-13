#include "Rouge.h"

void Rouge::addCoins(int coins)
{
    coins = coins * 2;
    Player::addCoins(coins);
}

std::string Rouge::getJob() const
{
    return "Rouge";
}