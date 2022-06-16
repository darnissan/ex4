#include "BattleCard.h"
#include "Card.h"
#include "Dragon.h"
#include "Player.h"

Dragon::Dragon()
{

    Dragon::playerWin(const Player& player)
    {
    }
    m_cardName = "Dragon";
    m_force = 25;
    m_coins = 1000;
};

if (Player.getAttackStrengt() > Dragon.m_force) {
    Player.levelUp();
    Player.addCoins(Dragon.m_coins);
}

else {
    Player.damage(INT_MAX);
}
