#ifndef MERCHANT_H_
#define MERCHANT_H_
#include "../utilities.h"
#include <iostream>
#include <stdlib.h>
#include <string>
class Merchant : public Card {
protected:
    virtual void print(std::ostream& os) const override
    {
        printCardDetails(os, m_cardName);
        printEndOfCardDetails(os);
    }

private:
    std::string m_cardName;

public:
    Merchant() {};
    ~Merchant() {};
};

#endif /* MERCHANT_H_ */