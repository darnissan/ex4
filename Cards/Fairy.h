#ifndef FAIRY_H_
#define FAIRY_H_
#include "../utilities.h"
#include <iostream>
#include <stdlib.h>
#include <string>
class Fairy : public Card {
protected:
    virtual void print(std::ostream& os) const override
    {
        printCardDetails(os, m_cardName);
        printEndOfCardDetails(os);
    }

private:
    std::string m_cardName;

public:
    void uniqeAction(std::unique_ptr<Player>& player) override;
    Fairy() {};
    ~Fairy() {};
};

#endif /* FAIRY_H_ */