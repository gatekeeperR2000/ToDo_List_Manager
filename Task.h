#pragma once

#ifndef Task_h
#define Task_h

// Includes
#include <iostream>
#include <string>

using namespace std;

class Task {
private:
	// Private variables
	int task_number;
	string task_name;
	string task_description;

public:
	// Public functions
	Task();

	int get_task_number();
	string get_task_name();
	string get_task_description();

	void display_task();

	void set_task_number(int task_number);
	void set_task_name();
	void set_task_description();

};

#endif