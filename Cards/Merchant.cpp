#include "Merchant.h"
#include "../utilities.h"
#include "Card.h"
void Merchant::print(std::ostream& os) const
{
    printCardDetails(os, m_cardName);
    printEndOfCardDetails(os);
}

Merchant::Merchant()
{

    m_cardName = "Merchant";
}

void Merchant::uniqeAction(std::unique_ptr<Player>& player)
{
    int userChoice;
    std::string m_input;
    int playerCoins = player->getCoins();
    printMerchantInitialMessageForInteractiveEncounter(std::cout, player->getName(), playerCoins);
    std::getline(std::cin, m_input);
    try {
        userChoice = std::stoi(m_input);
    } catch (std::invalid_argument& e) {
        printInvalidInput();
        uniqeAction(player);
    } catch (std::out_of_range& e) {
        printInvalidInput();
        uniqeAction(player);
    }
    if (userChoice == 0) {
        printMerchantSummary(std::cout, player->getName(), 0, 0);
    }
    if (userChoice == 1) {
        {

            if (playerCoins >= 5) {
                player->heal(1);
                player->pay(5);
                printMerchantSummary(std::cout, player->getName(), 1, 5);
            } else {
                printMerchantInsufficientCoins(std::cout);
                printMerchantSummary(std::cout, player->getName(), 1, 0);
            }
        }
    } else if (userChoice == 2) {
        if (playerCoins >= 10) {
            player->pay(10);
            player->buff(1);
            printMerchantSummary(std::cout, player->getName(), 2, 10);
        } else {
            printMerchantInsufficientCoins(std::cout);
            printMerchantSummary(std::cout, player->getName(), 2, 0);
        }
    }
}
Card* Merchant::clone( ) const
{
    return new Merchant();
}