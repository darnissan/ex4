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

public:
    virtual ~Card(){};
    virtual friend std::ostream &operator<<(std::ostream &os, const Card &card);
};

#endif /* CARD_H_ */