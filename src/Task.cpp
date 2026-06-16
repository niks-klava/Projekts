#include "Task.h"

Task::Task(std::string q, int p) {
    question = q;
    points = p;
}

int Task::getPoints() {
    return points;
}