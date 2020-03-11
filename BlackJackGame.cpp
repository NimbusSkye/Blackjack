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
    m_player->clear();
    m_casino->clear();
    m_deck->clear();
    m_deck->Populate();
    m_deck->shuffle();
    m_player->add(m_deck->deal());
    m_player->add(m_deck->deal());
    m_casino->add(m_deck->deal());
    while (true) {
        prettyPrint(m_casino, m_player);
        if (!m_player->isDrawing())
            break;
        m_player->add(m_deck->deal());
        if (m_casino->isDrawing())
            m_casino->add(m_deck->deal());
        if (m_player->getTotal()>=21 || m_casino->getTotal()>=21)
            break;
    }
    m_casino->add(m_deck->deal());
    prettyPrint(m_casino, m_player);
    m_player->announce(*m_casino);
    cout << endl;
}