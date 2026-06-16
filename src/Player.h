#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
private:
    std::string name;
    int energy;
    int food;
    int water;
    int score;

public:
    Player(std::string n);
    void addScore(int s);
    void damage(int e, int f, int w);
    bool isAlive();
    void showStats();
    int getScore();
};

#endif