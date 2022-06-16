#include "Barfight.h"

#include <iostream>
const int hp_damage = 10;
Barfight::Barfight()
{
    m_cardName = "Barfight";
}
void Barfight::print(std::ostream& os) const
{
    printCardDetails(os, m_cardName);
    printEndOfCardDetails(os);
}
void Barfight::uniqeAction(std::unique_ptr<Player>& player)
{
    if (player->getJob() == "Fighter") {
        return;
    } else {
        player->damage(hp_damage);
    }
}
