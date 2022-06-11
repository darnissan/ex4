#ifndef DRAGON_H_
#define DRAGON_H_
#include <stdlib.h>
#include <string>
#include <iostream>
#include "utilities.h"
class Dragon : public Card
{
private:
    std::string m_cardName;

public:
    ~Dragon(){};
    virtual friend std::ostream &operator<<(std::ostream &os, const Card &card);
};

#endif /* DRAGON_H_ */