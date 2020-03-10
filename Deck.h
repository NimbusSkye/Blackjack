#ifndef BLACKJACK_DECK_H
#define BLACKJACK_DECK_H

#include "Hand.h"

class Deck : private Hand {
public:
    void shuffle ();
    void Populate();
    Card deal();
    void view();
};


#endif //BLACKJACK_DECK_H
