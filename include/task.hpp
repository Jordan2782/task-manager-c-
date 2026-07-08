#ifndef TASK_HPP_INCLUDED
#define TASK_HPP_INCLUDED
#include <string>
class Task
{
public:

    std::string nameOfTask;
     int taskDuration;
    bool isFinished;
    Task(const std::string &nameOfTask,const int taskDuration, bool isFinished = false);
};

#endif // TASK_HPP_INCLUDED
