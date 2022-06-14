#include "Merchant.h"
#include "Card.h"

void Merchant::print(std::ostream& os) const
{
    printCardDetails(os, m_cardName);
    printEndOfCardDetails(os);
}

Merchant::Merchant()
{

    m_cardName = "Merchant";
}