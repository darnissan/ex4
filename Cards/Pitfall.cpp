#include "Pitfall.h"
#include "Card.h"
const int hp_damage = 10;
void Pitfall::print(std::ostream &os) const
{
    printCardDetails(os, m_cardName);
    printEndOfCardDetails(os);
}

Pitfall::Pitfall()
{
    m_cardName = "Pitfall";
<<<<<<< HEAD
};
void Pitfall::uniqeAction(std::unique_ptr<Player>& player)
=======
}
void Pitfall::uniqeAction(std::unique_ptr<Player> &player)
>>>>>>> 2302d45a5a5726396d7a080c3ef1ace51b54a27a
{
    if (player->getJob() == "Rogue")
    {
        printPitfallMessage(true);
        return;
    }
    else
    {
        printPitfallMessage(false);
        player->damage(hp_damage);
    }
<<<<<<< HEAD
};
=======
}
Card *Pitfall::clone() const
{
    return new Pitfall();
}
>>>>>>> 2302d45a5a5726396d7a080c3ef1ace51b54a27a
