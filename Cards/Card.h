#ifndef CARD_H_
#define CARD_H_
#include <stdlib.h>
#include <string>
#include <iostream>
#include "utilities.h"
class Card
{
private:
    std::string m_cardName;
    std::unique_ptr<Card> m_currentCardType;

public:
    virtual ~Card(){};
    virtual friend std::ostream &operator<<(std::ostream &os, const Card &card);
    virtual void print(std::ostream &os) const = 0;
};

#endif /* CARD_H_ */