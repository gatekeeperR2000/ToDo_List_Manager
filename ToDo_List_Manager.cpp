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
}


int main()
{
    bool done = false;
    int choice;

    while (!done) {
        display_menu();

        cout << "Enter your choice: ";
        cin >> choice;

        // Debug
        cout << choice;
    }
}
