#include "Barfight.h"
#include "Card.h"
#include <iostream>

Barfight::Barfight()
{
    m_cardName = "Barfight";
};
void Barfight::print(std::ostream& os) const
{
    printCardDetails(os, m_cardName);
    printEndOfCardDetails(os);
}