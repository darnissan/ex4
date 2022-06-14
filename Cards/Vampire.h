#ifndef VAMPIRE_H_
#define VAMPIRE_H_
#include "../utilities.h"
#include "BattleCard.h"
#include <iostream>
#include <stdlib.h>
#include <string>
class Vampire : public BattleCard {
private:
    std::string m_cardName;

public:
    Vampire() {};
    ~Vampire() {};
};

#endif /* VAMPIRE_H_ */