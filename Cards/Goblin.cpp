#include "Goblin.h"
#include "Card.h"

Goblin::Goblin()
{
    m_cardName = "Goblin";
    m_force = 6;
    m_coins = 2;
    m_damageUponLoss = 10;
}

void Goblin::uniqeAction(std::unique_ptr<Player>& player)
{
    if (player->getAttackStrength() >= this->m_force) {
        player->levelUp();
        player->addCoins(this->m_coins);
    }

    else {
        player->damage(this->m_damageUponLoss);
    }
}
