#include "Vampire.h"
#include "BattleCard.h"
#include "Card.h"

Vampire::Vampire()
{
    m_cardName = "Vampire";
    m_coins = 2;
    m_damageUponLoss = 10;
    m_force = 10;
}
void Vampire::uniqeAction(std::unique_ptr<Player>& player)
{
    if (player->getAttackStrength() >= this->m_force) {
        player->levelUp();
        player->addCoins(this->m_coins);
    }

    else {
        player->damage(this->m_damageUponLoss);
        player->unbuff(-1);
    }
}