#ifndef DECK_H
#define DECK_H

#include <vector>
#include "Card.h"
using namespace std;

class Deck {
private:
    vector<Card> cards;

public:
    Deck();        // 建立52張牌
    void shuffle();// 洗牌
    Card deal();   // 發牌
};

#endif