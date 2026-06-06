#ifndef CARD_H
#define CARD_H

#include <string>
using namespace std;

class Card {
private:
    string suit; // 花色
    string rank; // 數字（A,2~10,J,Q,K）

public:
    Card(string s, string r); // 建構子
    int getValue() const;     // 回傳點數
    string toString() const;  // 轉成文字
};

#endif