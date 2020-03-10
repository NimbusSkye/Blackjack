#include "HumanPlayer.h"

bool HumanPlayer::isDrawing () {
    cout << "Do you want to draw? (y/n):";
    string s;
    string a="y";
    cin>>s;
    return a.compare(s) == 0;
}

void HumanPlayer::announce(Hand h) {
    if (HumanPlayer::isBusted() || h.getTotal()==21 || (h.getTotal()>HumanPlayer::getTotal() & h.getTotal()<22))
        cout << "Player lost.";
    else if (h.getTotal()==HumanPlayer::getTotal())
        cout << "Push.";
    else
        cout << "Player won.";
}