//
// Created by Admin on 3/10/2020.
//

#ifndef BLACKJACK_BLACKJACKGAME_H
#define BLACKJACK_BLACKJACKGAME_H

#include "Deck.h"
#include "ComputerPlayer.h"


class BlackJackGame {
private:
    Deck *m_deck = new Deck();
    ComputerPlayer *m_casino = new ComputerPlayer();
public:
    void play();
};


#endif //BLACKJACK_BLACKJACKGAME_H
