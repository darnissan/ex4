#include "Vampire.h"
#include "BattleCard.h"
#include "Card.h"

Vampire::Vampire()
{
    m_cardName = "Vampire";
    m_coins = 2;
    m_damageUponLoss = 10;
    m_force = 10;
<<<<<<< HEAD
};
void Vampire::uniqeAction(std::unique_ptr<Player>& player)
=======
}
void Vampire::uniqeAction(std::unique_ptr<Player> &player)
>>>>>>> 2302d45a5a5726396d7a080c3ef1ace51b54a27a
{
    if (player->getAttackStrength() >= this->m_force)
    {
        player->levelUp();
        player->addCoins(this->m_coins);
        printWinBattle(player->getName(), this->m_cardName);
    }

    else
    {
        printLossBattle(player->getName(), this->m_cardName);
        player->damage(this->m_damageUponLoss);
        player->unbuff(-1);
    }
}
Card *Vampire::clone() const
{
    return new Vampire();
}