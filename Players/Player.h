#ifndef EX4_PLAYER_H
#define EX4_PLAYER_H

#include "../utilities.h"
class Player {

public:
    Player(std::string name);
    Player();
    void levelUp();
    int getLevel() const;
    void buff(int force);
    virtual void heal(int heal);
    void damage(int damage);
    virtual void addCoins(int coins);
    bool pay(int pay);
    virtual int getAttackStrength() const;
    bool isKnockedOut() const;
    int getCoins() const;
    int getHP() const;
    Player(const Player&) = default;
    ~Player() = default;
    Player& operator=(const Player& other) = default;

    friend std::ostream& operator<<(std::ostream& os, Player& player);

protected:
    // I SEE YOU (▀̿Ĺ̯▀̿ ̿)
    virtual std::string getJob() const = 0;

private:
    std::string m_name;
    int m_level;
    int m_force;
    int m_HP;
    int m_coins;
};

#endif // EX4_PLAYER_H
