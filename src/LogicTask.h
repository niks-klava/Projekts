#ifndef LOGICTASK_H
#define LOGICTASK_H

#include "Task.h"

class LogicTask : public Task {
private:
    int correct;

public:
    LogicTask(std::string q, int ans, int p);

    void show() override;
    bool checkAnswer(int answer) override;
};

#endif