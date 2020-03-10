//
// Created by Admin on 3/10/2020.
//

#ifndef BLACKJACK_COMPUTERPLAYER_H
#define BLACKJACK_COMPUTERPLAYER_H

#include "AbstractPlayer.h"

class ComputerPlayer : public AbstractPlayer {
    bool isDrawing () override;
};


#endif //BLACKJACK_COMPUTERPLAYER_H
