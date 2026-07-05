#include <iostream>
#include "../../include/taskManager.hpp"
using namespace std;
#include <string>


int main()
{
    TaskManager taskManager{};

   int reponse = 0;


    while(reponse !=4)
    {
        cout << "Task Manager " << endl;
        cout << "1. add a Task " << endl;
       cout << "2. show the list Tasks " << endl;
       cout << "3. Mark a Task at Finish  " << endl;
       cout << "4. quit " << endl;


       cin >> reponse;

   if (reponse == 1)
   {
        cout << "enter the name of Task and his Duration " << endl;
        string name;
        cin.ignore();
        getline(cin,name );
        int duration;
        cin>> duration;
        cin.ignore();
        Task task {name,duration};
        taskManager.addTask(task);
}


if (reponse == 2)
   {
        cout << "list of Task  " << endl;
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
    taskManager.saveToFile("../../data/tasks.txt");
    cout << "Programm Finish  " << endl;
}



        cout << "Programm Finish  " << endl;


    return 0;
}
