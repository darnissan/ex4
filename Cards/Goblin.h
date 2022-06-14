#ifndef GOBLIN_H_
#define GOBLIN_H_
#include "../utilities.h"
#include "BattleCard.h"
#include <iostream>
#include <stdlib.h>
#include <string>
class Goblin : public BattleCard {
private:
public:
    Goblin()
    {
        m_cardName = "Goblin";
    };
    ~Goblin() {};
};

#endif /* GOBLIN_H_ */