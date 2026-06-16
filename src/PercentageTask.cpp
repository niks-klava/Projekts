#include "PercentageTask.h"
#include <iostream>

PercentageTask::PercentageTask(std::string q, int ans, int p)
    : Task(q, p), correct(ans) {}

void PercentageTask::show() {
    std::cout << "[PROCENTI] " << question << std::endl;
}

bool PercentageTask::checkAnswer(int answer) {
    return answer == correct;
}