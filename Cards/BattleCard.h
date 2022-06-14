#ifndef BATTLECARD_H_
#define BATTLECARD_H_
#include "../utilities.h"
#include "Card.h"
#include <iostream>
#include <stdlib.h>
#include <string>
class BattleCard : public Card {

protected:
    int m_force;
    int m_damageUponLoss;
    int m_coins;
    virtual void print(std::ostream& os) const override
    {
        printCardDetails(os, m_cardName);
        printMonsterDetails(os, m_force, m_damageUponLoss, m_coins);
        printEndOfCardDetails(os);
    }

private:
public:
    BattleCard();
    virtual ~BattleCard() {};
};
#endif /* BATTLECARD_H_ */