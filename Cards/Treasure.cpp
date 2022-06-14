#include "Treasure.h"
#include "Card.h"

void Treasure::print(std::ostream& os) const
{
    printCardDetails(os, m_cardName);
    printEndOfCardDetails(os);
}

Treasure::Treasure()
{
    m_cardName = "Treasure";
};