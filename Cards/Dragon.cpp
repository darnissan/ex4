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
<<<<<<< HEAD
};
void Dragon::uniqeAction(std::unique_ptr<Player>& player)
=======
}
void Dragon::uniqeAction(std::unique_ptr<Player> &player)
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
        player->totalyDead();
    }
}
Card *Dragon::clone() const
{
    return new Dragon();
}
