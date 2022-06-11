#ifndef MERCHANT_H_
#define MERCHANT_H_
#include <stdlib.h>
#include <string>
#include <iostream>
#include "../utilities.h"
class Merchant : public Card
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
    Merchant()
    {
        m_cardName = "Merchant";
    };
    ~Merchant(){};
};

#endif /* MERCHANT_H_ */