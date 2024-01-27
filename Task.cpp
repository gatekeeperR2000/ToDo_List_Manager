#include "Task.h"

using namespace std;

Task::Task() : task_number{ 1 }, task_name{}, task_description{} {}

int Task::get_task_number() {
	return task_number;
}

string Task::get_task_name() {
	return task_name;
}

string Task::get_task_description() {
	return task_description;
}

void Task::display_task() {
	cout << "Task Number: " << task_number << endl;
	cout << "Task Name: " << task_name << endl;
	cout << "Task Description: " << task_description << endl;
}

void Task::set_task_number(int new_task_number) {
	task_number = new_task_number;
}

void Task::set_task_name() {
	cout << "Enter a name for your task: ";
	getline(cin >> ws, task_name);
}

void Task::set_task_description() {
	cout << "Enter a short description for your task: ";
	getline(cin, task_description);
}