#include <iostream>
#include "../../include/taskManager.hpp"
using namespace std;
#include <string>


int main()
{
    TaskManager taskManager{};

   int reponse = 0;
   taskManager.loadFromFile("C:\\Users\\jorda\\OneDrive\\Desktop\\ProjetGit\\task-manager c++\\data\\tasks.txt");


    while(reponse !=4)
    {
         cout << " " << endl;
        cout << "Task Manager " << endl;
        cout << "1. add a Task " << endl;
       cout << "2. show the list Tasks " << endl;
       cout << "3. Mark a Task at Finish  " << endl;
       cout << "4. quit " << endl;
        cout << " " << endl;


       cin >> reponse;

   if (reponse == 1)
   {
        cout << "enter the name of Task and it'S Duration in hours " << endl;
         cout << " " << endl;
        string name;
        cin.ignore();
        getline(cin,name );
        int duration;
        cin>> duration;
        cin.ignore();

        cout << " " << endl;
        Task task {name,duration};
        taskManager.addTask(task);
}


if (reponse == 2)
   {
        cout << "list of Task  " << endl;
        cout << " " << endl;
        taskManager.readTask();
}

if (reponse == 3)
   {
        cout << "Mark a Task as Finish   " << endl;
        int pos;
        cout << " Enter the Position of the Task" << endl;
        cin>>pos;

        taskManager.markedAsFinished(pos);
}


}
if(reponse == 4)
{
    taskManager.saveToFile("C:\\Users\\jorda\\OneDrive\\Desktop\\ProjetGit\\task-manager c++\\data\\tasks.txt");
    cout << "Programm Finish  " << endl;
}


    return 0;
}
