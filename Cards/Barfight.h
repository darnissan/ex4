#ifndef BARFIGHT_H_
#define BARFIGHT_H_
#include <stdlib.h>
#include <string>
#include <iostream>
#include "../utilities.h"
class Barfight : public Card
{
protected:
    virtual void print(std::ostream &os) const override
    {
        printCardDetails(os, m_cardName);
        printEndOfCardDetails(os);
    }

private:
public:
    Barfight()
    {
        m_cardName = "Barfight";
    };
    ~Barfight(){};
};

#endif /* BARFIGHT_H_ */