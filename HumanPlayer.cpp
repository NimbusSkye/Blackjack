#include "HumanPlayer.h"
#include "ComputerPlayer.h"

bool HumanPlayer::isDrawing () {
    cout << "Do you want to draw? (y/n):";
    string s;
    string a="y";
    cin>>s;
    return a == s;
}

void HumanPlayer::announce(ComputerPlayer h) {
    //If player busts, casino wins, or casino has a larger total without busting
    if (HumanPlayer::isBusted() || h.getTotal()==21 || (h.getTotal()>HumanPlayer::getTotal() && !h.isBusted()))
        cout << "Player lost.";
    else if (h.getTotal()==HumanPlayer::getTotal())
        cout << "Push.";
    else
        cout << "Player won.";
}
