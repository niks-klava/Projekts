#include "Game.h"
#include "MathTask.h"
#include "LogicTask.h"
#include "PercentageTask.h"
#include "ScoreManager.h"

#include <iostream>

Game::Game() {
    player = nullptr;
}

Game::~Game() {
    delete player;
    for (auto t : tasks) delete t;
}

void Game::loadTasks() {
    tasks.push_back(new MathTask("15 + 5 = ?", 20, 10));
    tasks.push_back(new LogicTask("2,4,8,16,... ?", 32, 10));
    tasks.push_back(new PercentageTask("25% no 80?", 20, 10));
}

void Game::run() {
    std::string name;
    std::cout << "Ievadi vardu: ";
    std::cin >> name;

    player = new Player(name);

    loadTasks();

    ScoreManager sm;

    for (int day = 1; day <= 3 && player->isAlive(); day++) {
        std::cout << "\n===== DIENA " << day << " =====\n";

        for (auto t : tasks) {
            t->show();

            int ans;
            std::cout << "Atbilde: ";
            std::cin >> ans;

            if (t->checkAnswer(ans)) {
                std::cout << "Pareizi!\n";
                player->addScore(t->getPoints());
            } else {
                std::cout << "Nepareizi!\n";
                player->damage(10, 5, 5);
            }
        }

        player->showStats();
    }

    std::cout << "\nSPELE BEIGUSIES! Punkti: " << player->getScore() << "\n";

    sm.save(*player, name);
}