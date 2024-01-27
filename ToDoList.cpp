// Includes
#include "ToDoList.h"
#include <algorithm>

// Default constructor
ToDoList::ToDoList() : number_of_tasks{ 0 }, tasks{} {}

// Function Definitions
void ToDoList::get_list() {
	int item_number = 1;

	for_each(tasks.begin(), tasks.end(), []() {
		// Lambda Function to display each task
		cout << item_number << ". " << task.get_task() << endl;
		item_number++;
		})
}

void ToDoList::add_task_to_list(int& task_number) {
	Task new_task;

	tasks.push_back(new_task);
}

void ToDoList::delete_task_from_list() {

}