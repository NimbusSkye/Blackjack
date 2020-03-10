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
    Rank r;
    Type t;
    void displayCard() {
        switch(r) {
            case JACK:
                cout << 'J';
                break;
            case QUEEN:
                cout << 'Q';
                break;
            case KING:
                cout << 'K';
                break;
            default:
                cout << r;
        }
        cout << (char) t << endl;
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
