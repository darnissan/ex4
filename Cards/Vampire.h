#ifndef VAMPIRE_H_
#define VAMPIRE_H_
#include "BattleCard.h"
#include <stdlib.h>
#include <string>
#include <iostream>
#include "../utilities.h"
class Vampire : public BattleCard
{
private:
    std::string m_cardName;

public:
    Vampire()
    {
        m_cardName = "Vampire";
    };
    ~Vampire(){};
};

#endif /* VAMPIRE_H_ */