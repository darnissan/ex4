#ifndef BARFIGHT_H_
#define BARFIGHT_H_
#include <stdlib.h>
#include <string>
#include <iostream>
#include "../utilities.h"
class Barfight : public Card
{
private:
public:
    Barfight()
    {
        m_cardName = "Barfight";
    };
    ~Barfight(){};
    virtual friend std::ostream &operator<<(std::ostream &os, const Card &card);
};

#endif /* BARFIGHT_H_ */