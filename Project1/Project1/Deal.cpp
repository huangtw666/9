#include "Deal.h"
#include <cstdlib>
#include <ctime>
using namespace std;

string* CardGenerator::generateCards() {
    string* cards = new string[20];
    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < 20; i += 2) {
        int number = rand() % 13 + 1;
        int suitIndex = rand() % 4;
        char suit = suitIndex == 0 ? 's' : suitIndex == 1 ? 'h' : suitIndex == 2 ? 'c' : 'd';

        string card;
        if (number == 11)
            card = "J";
        else if (number == 12)
            card = "Q";
        else if (number == 13)
            card = "K";
        else
            card = to_string(number);

        cards[i] = card;
        cards[i + 1] = suit;
    }

    return cards;
}