#ifndef TASK_H
#define TASK_H

#include <string>

class Task {
protected:
    std::string question;
    int points;

public:
    Task(std::string q, int p);
    virtual ~Task() {}

    virtual void show() = 0;
    virtual bool checkAnswer(int answer) = 0;
    int getPoints();
};

#endif