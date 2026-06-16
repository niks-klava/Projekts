#ifndef PERCENTAGETASK_H
#define PERCENTAGETASK_H

#include "Task.h"

class PercentageTask : public Task {
private:
    int correct;

public:
    PercentageTask(std::string q, int ans, int p);

    void show() override;
    bool checkAnswer(int answer) override;
};

#endif