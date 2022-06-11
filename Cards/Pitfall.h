#ifndef PITFALL_H_
#define PITFALL_H_
#include <stdlib.h>
#include <string>
#include <iostream>
#include "utilities.h"
class Pitfall : public Card
{
private:
    std::string m_cardName;

public:
    ~Pitfall(){};
    virtual friend std::ostream &operator<<(std::ostream &os, const Card &card);
};

#endif /* PITFALL_H_ */