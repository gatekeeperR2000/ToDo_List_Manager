// Compile Once
#pragma once

// Maybe redundant make sure only one definition of this file
#ifndef ToDoList_h
#define ToDoList_h

// Includes
#include <string>
#include <iostream>
#include <list>
#include "Task.h"

using namespace std;

class ToDoList {
private:
	// Private Variables
	int number_of_tasks;

	list<Task> tasks;

public:
	// Public functions
	ToDoList();

	void get_list();

	void add_task_to_list(int task_number);

	void delete_task_from_list(int task_number_to_find);

	//void edit_task(int task_number_to_find);

};

#endif

