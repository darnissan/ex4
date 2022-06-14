#include "Fighter.h"

using std::string;

Fighter::Fighter(std::string name)
{
}

int Fighter::getAttackStrength() const
{
    int force = (Player::getAttackStrength() - Player::getLevel());
    int level = Player::getLevel();
    return (force * 2 + level);
}

std::string Fighter::getJob() const
{
    return "Fighter";
}
