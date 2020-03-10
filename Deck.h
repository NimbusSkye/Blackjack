#ifndef BLACKJACK_DECK_H
#define BLACKJACK_DECK_H

#include "Hand.h"

class Deck : public Hand {
public:
    void shuffle ();
    void Populate();
    Card deal();
};


#endif //BLACKJACK_DECK_H
