#include "Hand.h"

void Hand::add (Card c) {
    cards->push_back(c);
}
void Hand::clear () {
    cards->clear();
}
int Hand::getTotal() {
    int total=0;
    for (Card c : *cards) {
        total+=c.getValue();
    }
    return total;
}

void Hand::view() {
    for (Card c : *cards) {
        c.displayCard();
    }
}