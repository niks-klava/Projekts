#ifndef MATHTASK_H
#define MATHTASK_H

#include "Task.h"

class MathTask : public Task {
private:
    int correct;

public:
    MathTask(std::string q, int ans, int p);

    void show() override;
    bool checkAnswer(int answer) override;
};

#endif