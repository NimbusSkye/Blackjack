//
// Created by Admin on 3/11/2020.
//

#include "blackjack.h"
using namespace std;

//Translate enums to card info
void Card::displayCard() {
    switch(r) {
        case JACK:
            cout << 'J';
            break;
        case QUEEN:
            cout << 'Q';
            break;
        case KING:
            cout << 'K';
            break;
        default:
            cout << r;
    }
    switch (t) {
        case 1:
            cout << "C ";
            break;
        case 2:
            cout << "D ";
            break;
        case 3:
            cout << "H ";
            break;
        default:
            cout << "S ";
    }
}

int Card::getValue() {
    if (r>10)
        return 10;
    return r;
}

Card::Card (int rank, int type) {
    r = static_cast<Rank>(rank);
    t = static_cast<Type>(type);
}

void Hand::add (Card c) {
    cards->push_back(c);
}
void Hand::clear () {
    cards->clear();
}
int Hand::getTotal() {
    int total=0;
    int aces=0;
    for (Card c : *cards) {
        //If card is Ace, add 11
        if (c.getValue()==1) {
            aces++;
            total+=11;
            continue;
        }
        total+=c.getValue();
    }
    //If player busts, optimize the Aces
    while (total>21 && aces>0) {
        total-=10;
        aces--;
    }
    return total;
}

void Hand::view() {
    for (Card c : *cards) {
        c.displayCard();
    }
}

void Deck::shuffle () {
    std::shuffle(cards->begin(), cards->end(), random_device());
}

void Deck::Populate () {
    for (int i=1; i<=13; i++) {
        for (int j=1; j<=4; j++) {
            Card *c = new Card (i, j);
            Deck::add(*c);
        }
    }
}

Card Deck::deal () {
    //Pop first card from vector
    Card c = cards->front();
    cards->erase(cards->begin());
    return c;
}

bool AbstractPlayer::isBusted() {
    return Hand::getTotal()>21;
}

bool ComputerPlayer::isDrawing() {
    return ComputerPlayer::getTotal()<=16;
}

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

void prettyPrint (ComputerPlayer *h1, HumanPlayer *h2) {
    cout << "Casino: ";
    h1->view();
    cout << "[" << h1->getTotal() << "]" << endl;
    cout << "Player: ";
    h2->view();
    cout << "[" << h2->getTotal() << "]" << endl;
}

void BlackJackGame::play() {
    //Set up for new round
    m_player->clear();
    m_casino->clear();
    m_deck->clear();
    m_deck->Populate();
    m_deck->shuffle();
    //Deal one card to casino, two cards to player
    m_player->add(m_deck->deal());
    m_player->add(m_deck->deal());
    m_casino->add(m_deck->deal());
    bool pdraw = true;
    while (true) {
        prettyPrint(m_casino, m_player);
        //Break immediately if player stops drawing
        if (!m_player->isDrawing()) {
            pdraw = false;
            break;
        }
        m_player->add(m_deck->deal());
        if (m_casino->isDrawing())
            m_casino->add(m_deck->deal());
        if (m_player->getTotal()>=21 || m_casino->getTotal()>=21)
            break;
    }
    //If player doesn't draw, casino draws one more card
    if (!pdraw)
        m_casino->add(m_deck->deal());
    prettyPrint(m_casino, m_player);
    m_player->announce(*m_casino);
    cout << endl;
}

BlackJackGame::~BlackJackGame() {
    delete m_deck;
    delete m_player;
    delete m_casino;
}