// ToDo_List_Manager.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Will also contain the display_menu() function
//

// Includes
#include <iostream>
#include "ToDoList.h"

using namespace std;


// Display function to show all commands to navigate the menu of the program
void display_menu() {
    cout << "\nManager menu:\n";
    cout << "0. Quit the Program\n";
    cout << "1. Add a Task\n";
    cout << "2. Display your List\n";
    cout << "3. Delete a Task\n";
    cout << "4. Edit a Task\n";
    cout << "\n";
}


int main()
{
    bool done = false;
    int choice;

    int task_number = 0;
    int task_number_to_find;

    ToDoList* your_list = new ToDoList();


    while (!done) {
        display_menu();

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 0:
            done = true;
            break;
        case 1:
            cout << "Adding a Task: \n";
            your_list->add_task_to_list(task_number);
            task_number++;

            break;
        case 2:
            cout << "Your List is as follows: \n";
            your_list->get_list();
            break;
        case 3:
            cout << "Enter the Task Number you wish to delete: ";
            cin >> task_number_to_find;
            cout << "Attmepting to delete a Task: \n";
            your_list->delete_task_from_list(task_number_to_find);
            break;
        //case 4:
        //    cout << "Enter the Task Number you wish to edit: ";
        //    cin >> task_number_to_find;
        //    cout << "Attempting to edit the Task: \n";
        //    your_list->edit_task(task_number_to_find);
        //    break;
        default:
            cout << "That is not a valid choice of this menu, please try again.\n";
            break;

            cout << "\n";
        }
    }
    delete your_list;
}
