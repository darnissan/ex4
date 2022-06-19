#include "Barfight.h"
#include "Card.h"
#include <iostream>
const int hp_damage = 10;
Barfight::Barfight()
{
    m_cardName = "Barfight";
<<<<<<< HEAD
};
void Barfight::print(std::ostream& os) const
=======
}
void Barfight::print(std::ostream &os) const
>>>>>>> 2302d45a5a5726396d7a080c3ef1ace51b54a27a
{
    printCardDetails(os, m_cardName);
    printEndOfCardDetails(os);
}
void Barfight::uniqeAction(std::unique_ptr<Player> &player)
{
    if (player->getJob() == "Fighter")
    {
        printBarfightMessage(true);
        return;
    }
    else
    {
        printBarfightMessage(false);
        player->damage(hp_damage);
    }
<<<<<<< HEAD
};
=======
}
Card *Barfight::clone() const
{
    return new Barfight();
}
>>>>>>> 2302d45a5a5726396d7a080c3ef1ace51b54a27a
