#include "Fairy.h"
#include "Card.h"

void Fairy::print(std::ostream& os) const
{
    printCardDetails(os, m_cardName);
    printEndOfCardDetails(os);
}

Fairy::Fairy()
{
    m_cardName = "Fairy";
}