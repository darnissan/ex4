#include "Mtmchkin.h"
#include "Cards/Barfight.h"
#include "Cards/Card.h"
#include "Cards/Dragon.h"
#include "Cards/Fairy.h"
#include "Cards/Goblin.h"
#include "Cards/Merchant.h"
#include "Cards/Pitfall.h"
#include "Cards/Treasure.h"
#include "Cards/Vampire.h"
#include "Players/Fighter.h"
#include "Players/Player.h"
#include "Players/Rouge.h"
#include "Players/Wizard.h"
#include "utilities.h"
#include <fstream>
#include <iostream>
#include <map>
#include <memory>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <vector>

Mtmchkin::Mtmchkin(const std::string fileName)
{

    printStartGameMessage();
    // std::map<char *, std::unique_ptr<Card>> mapStringToCard = {"Barfight ", std::unique_ptr<Barfight>{new Barfight()}};

    // CardType *currentCardType;
    ReadingCardsFromFile(fileName);
    m_currentCardIndex = 0;
    ReadingPlayersFromUser();
    m_currentPlayerIndex = 0;
}

bool isStringInVector(const std::vector<const char*>& vector, const std::string& string)
{
    for (int i = 0; i < (int)vector.size(); i++) {
        if (vector[i] == string) {

            return true;
        }
    }
    return false;
}

std::unique_ptr<Card> StringToUniquePtrCard(const std::string& string)
{
    if (string == "Barfight")
        return std::unique_ptr<Card> { new Barfight() };
    else if (string == "Dragon")
        return std::unique_ptr<Card> { new Dragon() };
    else if (string == "Fairy")
        return std::unique_ptr<Card> { new Fairy() };
    else if (string == "Goblin")
        return std::unique_ptr<Card> { new Goblin() };
    else if (string == "Pitfall")
        return std::unique_ptr<Card> { new Pitfall() };
    else if (string == "Treasure")
        return std::unique_ptr<Card> { new Treasure() };
    else if (string == "Vampire")
        return std::unique_ptr<Card> { new Vampire() };
    else
        return nullptr;
}

void Mtmchkin::ReadingCardsFromFile(const std::string fileName)
{
    const std::vector<const char*> CardTypes = { "Barfight", "Dragon", "Fairy", "Goblin", "Pitfall", "Treasure", "Vampire" };
    std::ifstream file(fileName);
    if (!file.is_open()) {
        throw DeckFileNotFound("Deck File Error: File not found");
    }
    int lineNumber = 1;
    while (!file.eof()) {
        std::string line;
        std::getline(file, line);

        if (!isStringInVector(CardTypes, line)) {
            throw DeckFileFormatError("Deck File Error: File format error in line ", std::to_string(lineNumber));
        }
        // std::unique_ptr<Card> currentCard = Card::Card(cardTypeMap[line]);
        m_deckOfCards->insert(m_deckOfCards->end(), StringToUniquePtrCard(line));
        lineNumber++;
    }
    if (m_deckOfCards->size() < 5) {
        throw DeckFileInvalidSize("Deck File Error: Deck size is invalid");
    }
}
void Mtmchkin::ReadingPlayersFromUser()
{
    const std::vector<const char*> PlayerTypes = { "Wizard", "Rouge", "Fighter" };
    std::string userInput;
    printEnterTeamSizeMessage();
    bool validTeamSize = false;
    while (validTeamSize == false) {
        std::cin >> userInput;
        try {
            m_numberOfPlayers = std::stoi(userInput);
        } catch (std::invalid_argument const& ex) {
            printInvalidInput();
        }

        if (m_numberOfPlayers < 2 || m_numberOfPlayers > 6) {
            printInvalidTeamSize();
        } else {
            validTeamSize = true;
        }
    }
    bool validPlayerName = false, validClassName = false;
    std::string userClassInput;
    for (int i = 0; i < m_numberOfPlayers; i++) {
        printInsertPlayerMessage();
        std::cin >> userInput;
        std::cin >> userClassInput;
        while (validPlayerName == false || validClassName == false) {
            if (isValidString(userInput) == false) {
                printInvalidName();
                std::cin >> userInput;
                std::cin >> userClassInput;
            } else if (isValidString(userClassInput) == false || isStringInVector(PlayerTypes, userClassInput) == false) {
                printInvalidClass();
                std::cin >> userInput;
                std::cin >> userClassInput;
            } else {
                validPlayerName = true;
                validClassName = true;
            }
        }
        m_players->insert(m_players->end(), StringToUniquePtrPlayer(userInput, userClassInput));
    }
}

std::unique_ptr<Player> StringToUniquePtrPlayer(const std::string& name, const std::string& m_class)
{
    if (m_class == "Fighter")
        return std::unique_ptr<Player> { new Fighter(name) };
    else if (m_class == "Wizard")
        return std::unique_ptr<Player> { new Wizard(name) };
    else if (m_class == "Rouge")
        return std::unique_ptr<Player> { new Rouge(name) };
    else
        return nullptr;
}

bool isValidString(const std::string& string)
{
    if (string.length() > 15) {
        return false;
    }

    for (int i = 0; i < (int)string.length(); i++) {
        if (!isalpha(string[i])) {
            return false;
        }
    }
    return true;
}
void Mtmchkin::playRound()
{
    m_numberOfRounds++;
    if (m_currentCardIndex >= m_deckOfCards->size()) {
        m_currentCardIndex = 0;
    }
    if (m_currentPlayerIndex >= m_players->size()) {
        m_currentPlayerIndex = 0;
    }
    m_deckOfCards[m_currentCardIndex].
}