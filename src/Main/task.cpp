#include "../../include/task.hpp"
#include <string>
Task::Task(const std::string &nameOfTask,const int taskDuration, bool isFinished)
:nameOfTask{nameOfTask}, taskDuration{taskDuration} ,isFinished{isFinished}
{

}
