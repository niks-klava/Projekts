#include "MathTask.h"
#include <iostream>

MathTask::MathTask(std::string q, int ans, int p)
    : Task(q, p), correct(ans) {}

void MathTask::show() {
    std::cout << "[MATEMATIKA] " << question << std::endl;
}

bool MathTask::checkAnswer(int answer) {
    return answer == correct;
}