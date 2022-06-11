#ifndef DRAGON_H_
#define DRAGON_H_
#include <stdlib.h>
#include <string>
#include <iostream>
#include "../utilities.h"
class Dragon : public Card
{
protected:
    virtual void print(std::ostream &os) const override
    {
        printCardDetails(os, m_cardName);
    }

private:
    std::string m_cardName;

public:
    Dragon()
    {
        m_cardName = "Dragon";
    };
    ~Dragon(){};
    virtual friend std::ostream &operator<<(std::ostream &os, const Card &card);
};

#endif /* DRAGON_H_ */