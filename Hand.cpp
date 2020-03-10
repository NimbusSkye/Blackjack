//
// Created by Admin on 3/9/2020.
//

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