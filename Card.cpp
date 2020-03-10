//
// Created by ywang498 on 2020-03-09.
//

#include "Card.h"

void Card::displayCard() {
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
}

int Card::getValue() {
    return r;
}

Card::Card (int rank, char type) {
r=static_cast<Rank>(rank);
t=static_cast<Type>(type);
}

Card::Card (int rank, int type) {
    r = static_cast<Rank>(rank);
    switch (type) {
        case 1:
            t = Card::CLUBS;
            break;
        case 2:
            t = Card::DIAMONDS;
            break;
        case 3:
            t = Card::HEARTS;
            break;
        default:
            t = Card::SPADES;
    }
}