#include "BattleCard.h"

void BattleCard::print(std::ostream& os) const
{
    printCardDetails(os, m_cardName);
    printMonsterDetails(os, m_force, m_damageUponLoss, m_coins);
    printEndOfCardDetails(os);
}


void Player::uniqueAction(const Player& player)
{
    if (Player.getAttackStrength() >= m_force) 
    {
        Player.win(this);
    }

        else 
        {
        Player.lose(this);
    }
};