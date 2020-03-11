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
        //If card is Ace, add 11
        if (c.getValue()==1) {
            aces++;
            total+=11;
            continue;
        }
        total+=c.getValue();
    }
    //If player busts, optimize the Aces
    while (total>21 && aces>0) {
        total-=10;
        aces--;
    }
    return total;
}

void Hand::view() {
    for (Card c : *cards) {
        c.displayCard();
    }
}
