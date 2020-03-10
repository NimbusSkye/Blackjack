//
// Created by Admin on 3/10/2020.
//

#ifndef BLACKJACK_DECK_H
#define BLACKJACK_DECK_H

#include "Hand.h"

class Deck : Hand {
    void shuffle ();
    void Populate();
    Card deal();
};


#endif //BLACKJACK_DECK_H
