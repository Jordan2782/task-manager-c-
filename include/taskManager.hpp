#ifndef TASKMANAGER_HPP_INCLUDED
#define TASKMANAGER_HPP_INCLUDED
#include <vector>
#include "task.hpp"
class TaskManager
{
private:
    std::vector<Task> listOfTask;

public:

    void readTask();
    void addTask(const Task &task);
    bool markedAsFinished(int pos );
    void saveToFile(const std::string &pfad);
    void loadFromFile(const std::string &pfad);

};
#endif // TASKMANAGER_HPP_INCLUDED
