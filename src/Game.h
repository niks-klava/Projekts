#ifndef GAME_H
#define GAME_H

#include "Player.h"
#include "Task.h"
#include <vector>

class Game {
private:
    Player *player;
    std::vector<Task*> tasks;

public:
    Game();
    ~Game();

    void loadTasks();
    void run();
};

#endif