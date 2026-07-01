#ifndef TASK_HPP_INCLUDED
#define TASK_HPP_INCLUDED
#include <string>
class Task
{
public:

    std::string nameOfTask;
     int taskDuration;
    bool isFinish;
    Task(const std::string &nameOfTask,int taskDuration, bool isFinish = false);
};

#endif // TASK_HPP_INCLUDED
