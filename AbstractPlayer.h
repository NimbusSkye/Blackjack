#ifndef BLACKJACK_ABSTRACTPLAYER_H
#define BLACKJACK_ABSTRACTPLAYER_H

#include "Hand.h"

class AbstractPlayer : public Hand {
    virtual bool isDrawing() = 0;
public:
    bool isBusted ();
};


#endif //BLACKJACK_ABSTRACTPLAYER_H
