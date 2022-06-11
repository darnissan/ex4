#ifndef MTMCHKIN_H_
#define MTMCHKIN_H_
#include <stdlib.h>
#include <string>
#include <iostream>
#include "utilities.h"
#include "Players/Player.h"

class Mtmchkin
{
private:
    int m_numberOfRounds;
    int m_numberOfPlayers;
    std::vector<std::unique_ptr<Card>> *m_deckOfCards;
    std::vector<Player> *m_players;
    std::vector<Player> *m_leadBoard;

public:
    /*
     * C'tor of Mtmchkin class
     *
     * @param filename - a file which contains the cards of the deck.
     * @return
     *      A new instance of Mtmchkin.
     */
    Mtmchkin(const std::string fileName);

    /*
     * Play the next Round of the game - according to the instruction in the exercise document.
     *
     * @return
     *      void
     */
    void playRound();

    /*
     * Prints the leaderBoard of the game at a given stage of the game - according to the instruction in the exercise document.
     *
     * @return
     *      void
     */
    void printLeaderBoard() const;

    /*
     *  Checks if the game ended:
     *
     *  @return
     *          True if the game ended
     *          False otherwise
     */
    bool isGameOver() const;

    /*
     *  Returns the number of rounds played.
     *
     *  @return
     *          int - number of rounds played
     */
    int getNumberOfRounds() const;
};

#endif /* MTMCHKIN_H_ */
