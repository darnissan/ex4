#include "Fairy.h"
#include "Card.h"

const int hp_heal = 10;
void Fairy::print(std::ostream &os) const
{
    printCardDetails(os, m_cardName);
    printEndOfCardDetails(os);
}

Fairy::Fairy()
{
    m_cardName = "Fairy";
}

void Fairy::uniqeAction(std::unique_ptr<Player> &Player)
{
    if (Player->getJob() == "Wizard")
    {
        printFairyMessage(true);
        Player->heal(hp_heal);
    }
    else
    {
        printFairyMessage(false);
        return;
    }
}
Card *Fairy::clone() const
{
    return new Fairy();
}