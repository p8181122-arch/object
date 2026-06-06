#include "Player.h"
#include <iostream>

void Player::addCard(Card c) {
    hand.push_back(c);
}

int Player::getScore() const {
    int total = 0;
    int aces = 0;

    for (auto c : hand) {
        int val = c.getValue();
        if (val == 11) aces++;
        total += val;
    }

    // A 可以變1
    while (total > 21 && aces > 0) {
        total -= 10;
        aces--;
    }

    return total;
}

void Player::showHand() const {
    for (auto c : hand) {
        cout << c.toString() << endl;
    }
    cout << "Score: " << getScore() << endl;
}