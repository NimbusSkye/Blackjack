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
    void add (Card c);
    void clear ();
    int getTotal();
};


#endif //BLACKJACK_HAND_H
