#include "../../include/task.hpp"
#include <string>
Task::Task(const std::string &nameOfTask,int taskDuration, bool isFinished)
:nameOfTask{nameOfTask}, taskDuration{taskDuration} ,isFinished{isFinished}
{

}
