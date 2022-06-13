#ifndef EX4_ROUGE_H
#define EX4_ROUGE_H
#include "Player.h"

class Rouge : public Player {
    void addCoins(int coins) override;
    std::string getJob() const override;
};

#endif // EX4_ROUGE_H
