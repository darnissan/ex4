#ifndef TREASURE_H_
#define TREASURE_H_
#include <stdlib.h>
#include <string>
#include <iostream>
#include "../utilities.h"
class Treasure : public Card
{
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