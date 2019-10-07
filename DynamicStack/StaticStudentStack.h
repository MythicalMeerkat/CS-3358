#pragma once

#include "stdafx.h"
#include "student.h"

class StaticStudentStack
{
private:
	student *stackArrayRecords;
	int STACK_SIZE;
	int top;

public:

	// CONSTRUCTOR
	StaticStudentStack(int);

	// DESTRUCTOR
	~StaticStudentStack();

	void push(student);
	void pop(student &);
	bool isFull() const;
	bool isEmpty() const;
	int getStackSize();
	void displayStack();


};
