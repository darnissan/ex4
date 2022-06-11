#include "Mtmchkin.h"
#include "utilities.h"
#include "Cards/Card.h"
#include "Cards/Barfight.h"
#include "Cards/Dragon.h"
#include "Cards/Fairy.h"
#include "Cards/Goblin.h"
#include "Cards/Merchant.h"
#include "Cards/Pitfall.h"
#include "Cards/Treasure.h"
#include "Cards/Vampire.h"
#include <string.h>
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <map>
#include <vector>
#include <memory>

Mtmchkin::Mtmchkin(const std::string fileName)
{

    printStartGameMessage();
    // std::map<char *, std::unique_ptr<Card>> mapStringToCard = {"Barfight ", std::unique_ptr<Barfight>{new Barfight()}};

    // CardType *currentCardType;
    ReadingCardsFromFile(fileName);
}

bool isStringInVector(const std::vector<const char *> &vector, const std::string &string)
{
    for (int i = 0; i < (int)vector.size(); i++)
    {
        if (vector[i] == string)
        {

            return true;
        }
    }
    return false;
}

std::unique_ptr<Card> StringToUniquePtr(const std::string &string)
{
    if (string == "Barfight")
        return std::unique_ptr<Card>{new Barfight()};
    else if (string == "Dragon")
        return std::unique_ptr<Card>{new Dragon()};
    else if (string == "Fairy")
        return std::unique_ptr<Card>{new Fairy()};
    else if (string == "Goblin")
        return std::unique_ptr<Card>{new Goblin()};
    else if (string == "Pitfall")
        return std::unique_ptr<Card>{new Pitfall()};
    else if (string == "Treasure")
        return std::unique_ptr<Card>{new Treasure()};
    else if (string == "Vampire")
        return std::unique_ptr<Card>{new Vampire()};
    else
        return nullptr;
}

void Mtmchkin::ReadingCardsFromFile(const std::string fileName)
{
    const std::vector<const char *> CardTypes = {"Barfight", "Dragon", "Fairy", "Goblin", "Pitfall", "Treasure", "Vampire"};
    std::ifstream file(fileName);
    if (!file.is_open())
    {
        throw DeckFileNotFound("Deck File Error: File not found");
    }
    int lineNumber = 1;
    while (!file.eof())
    {
        std::string line;
        std::getline(file, line);

        if (!isStringInVector(CardTypes, line))
        {
            throw DeckFileFormatError("Deck File Error: File format error in line ", std::to_string(lineNumber));
        }
        // std::unique_ptr<Card> currentCard = Card::Card(cardTypeMap[line]);
        m_deckOfCards->insert(m_deckOfCards->end(), StringToUniquePtr(line));
        lineNumber++;
    }
    if (m_deckOfCards->size() < 5)
    {
        throw DeckFileInvalidSize("Deck File Error: Deck size is invalid");
    }
}