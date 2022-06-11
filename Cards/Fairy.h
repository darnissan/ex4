#ifndef FAIRY_H_
#define FAIRY_H_
#include <stdlib.h>
#include <string>
#include <iostream>
#include "../utilities.h"
class Fairy : public Card
{
private:
    std::string m_cardName;

public:
    Fairy()
    {
        m_cardName = "Fairy";
    };
    ~Fairy(){};
};

#endif /* FAIRY_H_ */