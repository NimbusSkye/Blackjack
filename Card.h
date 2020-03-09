//
// Created by ywang498 on 2020-03-09.
//

#ifndef BLACKJACK_CARD_H
#define BLACKJACK_CARD_H


class Card {
    private:
    enum Rank {ACE = 1, 
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
    enum Type {CLUBS, DIAMONDS, HEARTS, SPADES};
    Rank r;
    Type t;
    public:
    void displayCard();
    int getValue();
    Card (Card::Rank rank, Card::Type type) {
        r=rank;
        t=type;
    }
};


#endif //BLACKJACK_CARD_H
