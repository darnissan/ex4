#ifndef CARD_H_
#define CARD_H_
#include <stdlib.h>
#include <string>
#include <iostream>
#include "../utilities.h"
class Card
{
protected:
    std::string m_cardName;

private:
    // std::unique_ptr<Card> m_currentCardType;

public:
    enum class CardType
    {
        Barfight,
        Dragon,
        Fairy,
        Goblin,
        Pitfall,
        Treasure,
        Vampire
    };
    /*
    Card(CardType cardType)
    {
        switch (cardType)
        {
        case CardType::Barfight1:
            return Barfight();
            break;
        case CardType::Dragon:
            return Dragon();
            break;
            {
                m_cardName = cardName;
                switch ()
                {
                }
            }
            */
    Card();
    virtual ~Card(){};
    virtual friend std::ostream &operator<<(std::ostream &os, const Card &card);
    // virtual void print(std::ostream &os) const = 0;
};
#endif /* CARD_H_ */