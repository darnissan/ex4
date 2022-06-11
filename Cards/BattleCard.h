#ifndef BATTLECARD_H_
#define BATTLECARD_H_
#include <stdlib.h>
#include <string>
#include <iostream>
#include "../utilities.h"
#include "Card.h"
class BattleCard : public Card
{

protected:
    const int m_force;
    const int m_damageUponLoss;
    const int m_coins;
    virtual void print(std::ostream &os) const override
    {
        printCardDetails(os, m_cardName);
        printMonsterDetails(os, m_force, m_damageUponLoss, m_coins);
        printEndOfCardDetails(os);
    }

private:
public:
    BattleCard();
    virtual ~BattleCard(){};
};
#endif /* BATTLECARD_H_ */