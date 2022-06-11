#ifndef GOBLIN_H_
#define GOBLIN_H_
#include <stdlib.h>
#include <string>
#include <iostream>
#include "../utilities.h"
class Goblin : public Card
{
private:
    std::string m_cardName;

public:
    Goblin()
    {
        m_cardName = "Goblin";
    };
    ~Goblin(){};
    virtual friend std::ostream &operator<<(std::ostream &os, const Card &card);
};

#endif /* GOBLIN_H_ */