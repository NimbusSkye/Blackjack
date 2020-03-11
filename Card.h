#ifndef BLACKJACK_CARD_H
#define BLACKJACK_CARD_H

#include <iostream>
using namespace std;

class Card {
public:
    void displayCard();
    int getValue();
    Card (int rank, int type);
private:
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
    enum Type {CLUBS=1, DIAMONDS, HEARTS, SPADES};
    Rank r;
    Type t;
};


#endif //BLACKJACK_CARD_H
