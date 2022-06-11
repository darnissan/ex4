#ifndef TREASURE_H_
#define TREASURE_H_
#include <stdlib.h>
#include <string>
#include <iostream>
#include "../utilities.h"
class Treasure : public Card
{
protected:
    virtual void print(std::ostream &os) const override
    {
        printCardDetails(os, m_cardName);
        printEndOfCardDetails(os);
    }

private:
    std::string m_cardName;

public:
    Treasure()
    {
        m_cardName = "Treasure";
    };
    ~Treasure(){};
};

#endif /* TREASURE_H_ */