#ifndef GOBLIN_H_
#define GOBLIN_H_
#include <BattleCard.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include "../utilities.h"
class Goblin : public BattleCard
{
private:
    std::string m_cardName;

public:
    Goblin()
    {
        m_cardName = "Goblin";
    };
    ~Goblin(){};
};

#endif /* GOBLIN_H_ */