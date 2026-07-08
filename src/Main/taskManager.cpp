#include "../../include/taskManager.hpp"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


void TaskManager::readTask()
{
    for(Task t:listOfTask)
    {
        std::cout << t.nameOfTask << " " << t.taskDuration << " hours ";
        if(!t.isFinished)
        {
            std::cout << " is still marked as not yet completed  " <<endl;
        }
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
      std::cout << " is still marked as yet completed  " <<endl;
      return true;
  }
  return false ;
}

void TaskManager::saveToFile(const std::string &pfad)
{
    std::ofstream data(pfad,ios::out);
    if(data.fail())
    {
        std::cerr<< "saveToFile Pfad was not found " <<std::endl;
        return;
    }

     for(Task t:listOfTask)
    {
        data << t.nameOfTask << " " << " is " << t.taskDuration << " hours " <<  " "  << t.isFinished << std::endl;
    }
    data.close();
}


void TaskManager::loadFromFile(const std::string &pfad)
{
    std::ifstream data(pfad,ios::in);
    if(data.fail())
    {
        std::cerr<< " loadFromFile Pfad was not found " <<std::endl;
        return;
    }
    std::string name;
    int duration;
    bool isFinished;
    while(data >> name >> duration >> isFinished)
{
    listOfTask.push_back(Task{name, duration, isFinished});
}
    data.close();
}

