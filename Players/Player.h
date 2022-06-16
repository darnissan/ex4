#ifndef EX4_PLAYER_H
#define EX4_PLAYER_H
#include "../Cards/Card.h"
#include "../utilities.h"
class Player {
public:
    void totalyDead();
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
    void win(const Card& card);
    void lose(const Card& card);
    std::string getName() const;

    friend std::ostream& operator<<(std::ostream& os, Player& player);
    virtual std::string getJob() const = 0;

protected:
    // I SEE YOU (▀̿Ĺ̯▀̿ ̿)

private:
    std::string m_name;
    int m_level;
    int m_force;
    int m_HP;
    int m_coins;
};

#endif // EX4_PLAYER_H
