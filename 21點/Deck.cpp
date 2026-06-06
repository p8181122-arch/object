#include "Deck.h"
#include <algorithm>
#include <cstdlib>
#include <ctime>

Deck::Deck() {
    string suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    string ranks[] = {"2","3","4","5","6","7","8","9","10","J","Q","K","A"};

    for (string s : suits) {
        for (string r : ranks) {
            cards.push_back(Card(s, r));
        }
    }
}

void Deck::shuffle() {
    srand(time(0));
    random_shuffle(cards.begin(), cards.end());
}

Card Deck::deal() {
    Card c = cards.back();
    cards.pop_back();
    return c;
}