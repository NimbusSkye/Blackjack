//
// Created by Admin on 3/10/2020.
//

#include "HumanPlayer.h"
#include "ComputerPlayer.h";

bool HumanPlayer::isDrawing () {
    cout << "Do you want to draw? (y/n):";
    string s;
    string a="y";
    cin>>s;
    return a.compare(s) == 0;
}

void HumanPlayer::announce(Hand h) {
    if (HumanPlayer::isBusted())
        cout << "Player lost.";
    else if (h.getTotal()>=21)
        cout << "Player won.";
    else
        cout << "Push.";
}