#include "BlackJackGame.h"

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