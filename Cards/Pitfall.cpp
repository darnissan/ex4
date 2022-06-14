#include "Pitfall.h"
#include "Card.h"
void Pitfall::print(std::ostream& os) const
{
    printCardDetails(os, m_cardName);
    printEndOfCardDetails(os);
}

Pitfall::Pitfall()
{
    m_cardName = "Pitfall";
};