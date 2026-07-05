#include "../../include/taskManager.hpp"
#include <iostream>
#include <fstream>
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

void TaskManager::saveToFile(const std::string &pfad)
{
    std::ofstream data(pfad,ios::out);
    if(data.fail())
    {
        std::cerr<< "Pfad was not found " <<std::endl;
        return;
    }



     for(Task t:listOfTask)
    {
        data << t.nameOfTask << " " << t.taskDuration <<std::endl;
    }
    data.close();
}
