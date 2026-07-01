#include "../../include/task.hpp"
#include <string>
Task::Task(const std::string &nameOfTask,int taskDuration, bool isFinish)
:nameOfTask{nameOfTask}, taskDuration{taskDuration} ,isFinish{isFinish}
{

}
