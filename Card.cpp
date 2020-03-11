#include "Card.h"

//Translate enums to card info
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
    switch (t) {
        case 1:
            cout << "C ";
            break;
        case 2:
            cout << "D ";
            break;
        case 3:
            cout << "H ";
            break;
        default:
            cout << "S ";
    }
}

int Card::getValue() {
    if (r>10)
        return 10;
    return r;
}

Card::Card (int rank, int type) {
    r = static_cast<Rank>(rank);
    t = static_cast<Type>(type);
}