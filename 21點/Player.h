#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include "Card.h"
using namespace std;

class Player {
private:
    vector<Card> hand; // 手牌

public:
    void addCard(Card c); // 拿牌
    int getScore() const; // 算分數
    void showHand() const;// 顯示手牌
};

#endif