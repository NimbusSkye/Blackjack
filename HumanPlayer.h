//
// Created by Admin on 3/10/2020.
//

#ifndef BLACKJACK_HUMANPLAYER_H
#define BLACKJACK_HUMANPLAYER_H

#include "AbstractPlayer.h"
#include <iostream>
#include <string>
using namespace std;

class HumanPlayer : public AbstractPlayer {
public:
    bool isDrawing () override;
    void announce (Hand h);
};


#endif //BLACKJACK_HUMANPLAYER_H
