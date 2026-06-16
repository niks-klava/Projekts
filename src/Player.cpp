#include "Player.h"
#include <iostream>

Player::Player(std::string n) {
    name = n;
    energy = 100;
    food = 50;
    water = 40;
    score = 0;
}

void Player::addScore(int s) {
    score += s;
}

void Player::damage(int e, int f, int w) {
    energy -= e;
    food -= f;
    water -= w;
}

bool Player::isAlive() {
    return energy > 0 && food > 0 && water > 0;
}

void Player::showStats() {
    std::cout << "\n--- STATUS ---\n";
    std::cout << "Energija: " << energy << "\n";
    std::cout << "Partika: " << food << "\n";
    std::cout << "Udens: " << water << "\n";
    std::cout << "Punkti: " << score << "\n";
}

int Player::getScore() {
    return score;
}