#include "../../include/taskManager.hpp"
#include <iostream>
using namespace std;


void TaskManager::readTask()
{
    for(Task t:listOfTask)
    {
        std::cout << t.nameOfTask << " " << t.taskDuration <<std::endl;
    }
}
void TaskManager::addTask(const Task &task)
{
   listOfTask.push_back(task);

}
bool TaskManager::markedAsFinished(int pos )
{
  if(!listOfTask[pos].isFinished)
  {
      listOfTask[pos].isFinished = true;
      return true;
  }
  return false ;
}
