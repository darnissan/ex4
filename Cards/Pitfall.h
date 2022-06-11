#ifndef PITFALL_H_
#define PITFALL_H_
#include <stdlib.h>
#include <string>
#include <iostream>
#include "../utilities.h"
class Pitfall : public Card
{
protected:
    virtual void print(std::ostream &os) const override
    {
        printCardDetails(os, m_cardName);
        printEndOfCardDetails(os);
    }

private:
    std::string m_cardName;

public:
    Pitfall()
    {
        m_cardName = "Pitfall";
    };
    ~Pitfall(){};
};

#endif /* PITFALL_H_ */