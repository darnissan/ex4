#ifndef TREASURE_H_
#define TREASURE_H_
#include "../utilities.h"
#include <iostream>
#include <stdlib.h>
#include <string>
class Treasure : public Card {
protected:
    virtual void print(std::ostream& os) const override
    {
        printCardDetails(os, m_cardName);
        printEndOfCardDetails(os);
    }

private:
    std::string m_cardName;

public:
    Treasure();
    ~Treasure() {};
};

#endif /* TREASURE_H_ */