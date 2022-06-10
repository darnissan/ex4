#include "Mtmchkin.h"
#include <string.h>
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
Mtmchkin::Mtmchkin(const std::string fileName)
{
    std::ifstream file(fileName);
    if (!file.is_open())
    {
        std::cout << "Error: File not found" << std::endl;
        exit(1);
    }
    std::string line;
    std::getline(file, line);
    m_numberOfRounds = atoi(line.c_str());
    std::getline(file, line);
    m_numberOfPlayers = atoi(line.c_str());
    m_players = new Player *[m_numberOfPlayers];
    for (int i = 0; i < m_numberOfPlayers; i++)
    {
        std::getline(file, line);
        m_players[i] = new Player(line);
    }
    file.close();
}