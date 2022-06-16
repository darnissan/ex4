#include "Dragon.h"
#include "BattleCard.h"
#include "Card.h"
#include "Player.h"

Dragon::Dragon()
{

    m_cardName = "Dragon";
    m_force = 25;
    m_coins = 1000;
    m_damageUponLoss = INT_MAX;
};
void Dragon::uniqeAction(std::unique_ptr<Player>& player)
{
    if (player->getAttackStrength() >= this->m_force) {
        player->levelUp();
        player->addCoins(this->m_coins);
    }

    else {
        player->totalyDead();
    }
}
