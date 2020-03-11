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
        if (c.getValue()==1 && total<=11) {
            aces++;
            total+=10;
            continue;
        }
        total+=c.getValue();
    }
    if (total>21)
        total-=(aces*9);
    return total;
}

void Hand::view() {
    for (Card c : *cards) {
        c.displayCard();
    }
}