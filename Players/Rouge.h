#ifndef EX4_ROUGE_H
#define EX4_ROUGE_H
#include "Player.h"

class Rouge : public Player {
public:
    Rouge(std::string name)
        : Player(name) {};
    ~Rouge() {};
    void addCoins(int coins) override;
    std::string getJob() const override;
};

#endif // EX4_ROUGE_H
