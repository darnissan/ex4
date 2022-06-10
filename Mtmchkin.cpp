#include "Mtmchkin.h"
#include <string.h>
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>

Mtmchkin::Mtmchkin(const std::string fileName)
{
    const std::vector CardTypes = {"Barfight", "Dragon", "Fairy", "Goblin", "Pitfall", "Treasure", "Vampire"};
    std::ifstream file(fileName);
    if (!file.is_open())
    {
        throw DeckFileNotFound("Deck File Error: File not found");
    }
    int lineNumber = 0;
    while (!file.eof())
    {
        std::string line;
        std::getline(file, line);

        if (!isStringInVector(CardTypes, line))
        {
            throw DeckFileFormatError("Deck File Error: File format error in line ", std::to_string(lineNumber));
        }
        m_decOfCards
            lineNumber++;
    }
}

bool isStringInVector(const std::vector<const char *> &vector, const std::string &string)
{
    for (int i = 0; i < vector.size(); i++)
    {
        if (vector[i] == string)
        {
            return true;
        }
    }
    return false;
}