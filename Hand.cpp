#include "Hand.h"

void Hand::add (Card c) {
    cards->push_back(c);
}
void Hand::clear () {
    cards->clear();
}
int Hand::getTotal() {
    int total=0;
    int aces=0;
    for (Card c : *cards) {
        //If card is Ace, check whether 1 or 10 is more beneficial
        if (c.getValue()==1 && total<=11) {
            aces++;
            total+=10;
            continue;
        }
        total+=c.getValue();
    }
    //If player busts, optimize the Aces
    while (total>21 && aces>0) {
        total-=9;
        aces--;
    }
    return total;
}

void Hand::view() {
    for (Card c : *cards) {
        c.displayCard();
    }
}