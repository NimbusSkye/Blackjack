//
// Created by ywang498 on 2020-03-09.
//

#ifndef BLACKJACK_CARD_H
#define BLACKJACK_CARD_H

#include <iostream>


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
    Rank r;
    Type t;
    void displayCard() {
        std::cout << r << (char) t << std::endl;
    };
    int getValue() {
        return r;
    };
    Card (Card::Rank rank, Card::Type type) {
        r=rank;
        t=type;
    }
};


#endif //BLACKJACK_CARD_H
