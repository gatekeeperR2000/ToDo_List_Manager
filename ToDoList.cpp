// Includes
#include "ToDoList.h"
#include <algorithm>

// Default constructor
ToDoList::ToDoList() : number_of_tasks{ 0 }, tasks{} {}

// Function Definitions
void ToDoList::get_list() {
	int item_number = 1;

	for_each(tasks.begin(), tasks.end(), [&item_number](auto& task) {
		// Lambda Function to display each task
		cout << item_number << ". ";
		task.display_task();
		cout << endl;
		item_number++;
		});
}

void ToDoList::add_task_to_list(int task_number) {
	Task new_task;
	new_task.set_task_number(task_number);
	new_task.set_task_name();
	new_task.set_task_description();

	tasks.push_back(new_task);
}

void ToDoList::delete_task_from_list(int task_number_to_find) {
	return;
}

void ToDoList::edit_task(int task_number_to_find) {
	return;
}