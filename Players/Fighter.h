#ifndef EX4_FIGHTER_H
#define EX4_FIGHTER_H
#include "Player.h"

class Fighter : public Player {
    int getAttackStrength() const override;
    std::string getJob() const override;
};

#endif // EX4_FIGHTER_H
