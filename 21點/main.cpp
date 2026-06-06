#include <iostream>
#include "Deck.h"
#include "Player.h"
#include "Card.h"
using namespace std;

int main() {
    Deck deck;
    Player player;
    Player dealer;

    deck.shuffle();

    // 初始牌
    player.addCard(deck.deal());
    player.addCard(deck.deal());

    dealer.addCard(deck.deal());
    dealer.addCard(deck.deal());

    cout << "Your hand:\n";
    player.showHand();

    // 玩家回合
    while (player.getScore() < 21) {
        cout << "Hit or Stand (h/s): ";
        char choice;
        cin >> choice;

        if (choice == 'h') {
            player.addCard(deck.deal());
            player.showHand();
        } else break;
    }

    // 莊家回合
    cout << "\nDealer's turn...\n";
    while (dealer.getScore() < 17) {
        dealer.addCard(deck.deal());
    }

    cout << "Dealer hand:\n";
    dealer.showHand();

    // 判斷輸贏
    int p = player.getScore();
    int d = dealer.getScore();

    if (p > 21 || (d <= 21 && d > p)) cout << "You lose\n";
    else if (p == d) cout << "Tie\n";
    else cout << "You win\n";

    return 0;
}