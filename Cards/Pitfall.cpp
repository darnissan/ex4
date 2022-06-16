#include "Pitfall.h"
#include "Card.h"
const int hp_damage = 10;
void Pitfall::print(std::ostream& os) const
{
    printCardDetails(os, m_cardName);
    printEndOfCardDetails(os);
}

Pitfall::Pitfall()
{
    m_cardName = "Pitfall";
}
void Pitfall::uniqeAction(std::unique_ptr<Player>& player)
{
    if (player->getJob() == "Rogue") {
        return;
    } else {
        player->damage(hp_damage);
    }
}
Card* Pitfall::clone( ) const
{
    return new Pitfall();
}
