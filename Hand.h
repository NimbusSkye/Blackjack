//
// Created by Admin on 3/9/2020.
//

#ifndef BLACKJACK_HAND_H
#define BLACKJACK_HAND_H

#include <vector>
#include "Card.h"
using namespace std;

class Hand {
private:
    vector<Card> *cards = new vector<Card>;
public:
    void add (Card c) {
        cards->push_back(c);
    }
    void clear () {
        cards->clear();
    }
    int getTotal() {
        int total=0;
        for (Card c : *cards) {
            total+=c.getValue();
        }
        return total;
    }
};


#endif //BLACKJACK_HAND_H
