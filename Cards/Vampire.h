#ifndef VAMPIRE_H_
#define VAMPIRE_H_
#include <stdlib.h>
#include <string>
#include <iostream>
#include "utilities.h"
class Vampire : public Card
{
private:
    std::string m_cardName;

public:
    ~Vampire(){};
    virtual friend std::ostream &operator<<(std::ostream &os, const Card &card);
};

#endif /* VAMPIRE_H_ */