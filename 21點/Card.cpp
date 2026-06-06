#include "Card.h"

Card::Card(string s, string r) : suit(s), rank(r) {}

int Card::getValue() const {
    if (rank == "A") return 11;
    if (rank == "J" || rank == "Q" || rank == "K") return 10;
    return stoi(rank);
}

string Card::toString() const {
    return rank + " of " + suit;
}