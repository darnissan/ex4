#ifndef DRAGON_H_
#define DRAGON_H_
#include <BattleCard.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include "../utilities.h"
class Dragon : public BattleCard
{
protected:
    virtual void print(std::ostream &os) const override
    {
        printCardDetails(os, m_cardName);
        printMonsterDetails(os, m_force, m_damageUponLoss, m_coins, true);
        printEndOfCardDetails(os);
    }

private:
    std::string m_cardName;

public:
    Dragon()
    {
        m_cardName = "Dragon";
    };
    ~Dragon(){};
    virtual friend std::ostream &operator<<(std::ostream &os, const Card &card);
};

#endif /* DRAGON_H_ */