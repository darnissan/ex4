#ifndef MERCHANT_H_
#define MERCHANT_H_
#include <stdlib.h>
#include <string>
#include <iostream>
#include "utilities.h"
class Merchant : public Card
{
private:
    std::string m_cardName;

public:
    virtual ~Card(){};
    virtual friend std::ostream &operator<<(std::ostream &os, const Card &card);
};

#endif /* CARD_H_ */