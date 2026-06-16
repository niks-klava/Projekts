#ifndef SCOREMANAGER_H
#define SCOREMANAGER_H

#include <string>
#include "Player.h"

class ScoreManager {
public:
    void save(Player &p, std::string name);
};

#endif