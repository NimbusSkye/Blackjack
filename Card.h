//
// Created by ywang498 on 2020-03-09.
//

#ifndef BLACKJACK_CARD_H
#define BLACKJACK_CARD_H

#include <iostream>
using namespace std;

class Card {
public:
    enum Rank {ACE=1,
        TWO,
        THREE,
        FOUR,
        FIVE,
        SIX,
        SEVEN,
        EIGHT,
        NINE,
        TEN,
        JACK,
        QUEEN,
        KING};
    enum Type {CLUBS='C', DIAMONDS='D', HEARTS='H', SPADES='S'};
    void displayCard();
    int getValue();
    Card (Card::Rank rank, Card::Type type);
private:
    Rank r;
    Type t;
};


#endif //BLACKJACK_CARD_H
