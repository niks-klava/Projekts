#include "ScoreManager.h"
#include <fstream>

void ScoreManager::save(Player &p, std::string name) {
    std::ofstream file("scores.csv", std::ios::app);
    file << name << "," << p.getScore() << "\n";
    file.close();
}