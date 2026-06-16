#include "LogicTask.h"
#include <iostream>

LogicTask::LogicTask(std::string q, int ans, int p)
    : Task(q, p), correct(ans) {}

void LogicTask::show() {
    std::cout << "[LOGIKA] " << question << std::endl;
}

bool LogicTask::checkAnswer(int answer) {
    return answer == correct;
}