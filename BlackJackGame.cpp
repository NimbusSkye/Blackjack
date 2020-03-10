#include "BlackJackGame.h"

void BlackJackGame::play() {
    m_player->clear();
    m_casino->clear();
    m_deck->clear();
    m_deck->Populate();
    m_deck->shuffle();
    m_player->add(m_deck->deal());
    m_player->add(m_deck->deal());
    while (true) {
        if (m_casino->isDrawing())
            m_casino->add(m_deck->deal());
        cout << "Casino: ";
        m_casino->view();
        cout << "[" << m_casino->getTotal() << "]" << endl;
        cout << "Player: ";
        m_player->view();
        cout << "[" << m_player->getTotal() << "]" << endl;
        if (m_player->isDrawing())
            m_player->add(m_deck->deal());
        cout << endl;
        if (m_player->getTotal()>=21 || m_casino->getTotal()>=21)
            break;
    }
    cout << "Casino: ";
    m_casino->view();
    cout << "[" << m_casino->getTotal() << "]" << endl;
    cout << "Player: ";
    m_player->view();
    cout << "[" << m_player->getTotal() << "]" << endl;
    m_player->announce(*m_casino);
    cout << endl;
}