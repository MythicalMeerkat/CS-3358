// Defines the entry point for StaticStudentStack.cpp

// Jeffrey A. Wilson
// A04770255 - jaw291

#include "stdafx.h"
#include "StaticStudentStack.h"
#include <iostream>

// Constructor Function for the STATIC Student Stack
// Takes in the size of the stack to be created.

StaticStudentStack::StaticStudentStack(int SIZE)
{
	stackArrayRecords = new student[SIZE];
	STACK_SIZE = SIZE;
	top = -1;
	
}

// Destructor Functions for the STATIC Student Stack
// Frees up allocated memory once used for the stack.

StaticStudentStack::~StaticStudentStack()
{
	delete [] stackArrayRecords;
}

// Push Function for the Static Student Stack
// Pushes a student object onto the top of the stack.

void StaticStudentStack::push(student student_object)
{
	if (isFull())
	{
		cout << "FATAL ERROR! No Space on the Stack!" << endl;
		cout << "Item could not be added." << endl;
	}

	else
	{
		top++;
		stackArrayRecords[top] = student_object;
	}
}

// Pop Function for the Static Student Stack

void StaticStudentStack::pop(student &student_object_catch)
{
	if (isEmpty())
	{
		cout << "FATAL ERROR! Stack is empty!" << endl;
		cout << "No items were popped from the stack." << endl;
	}
	else
	{
		student_object_catch = stackArrayRecords[top];
		top--;
	}
}

// Function for checking if the Stack is Full

bool StaticStudentStack::isFull() const
{
	bool status;

	if (top == STACK_SIZE - 1)
	{
		status = true;
	}
		
	else
	{
		status = false;
	}
	
	return status;
}

// Function for checking if the Stack is Empty

bool StaticStudentStack::isEmpty() const
{
	bool status;

	if (top == -1)
		status = true;
	else
		status = false;

	return status;
}

int StaticStudentStack::getStackSize()
{
	return STACK_SIZE;
}

void StaticStudentStack::displayStack()
{
	cout << "--- Displaying the (remaining) STATIC Stack ---" << endl << endl;
	
	for (int i = 0; i < (top + 1); ++i)
	{
		cout << "Name: " << stackArrayRecords[i].getName() << endl
			<< "ID: " << stackArrayRecords[i].getID() << endl
			<< "Address: " << stackArrayRecords[i].getAddress() << endl
			<< "Test Average: " << stackArrayRecords[i].getTestAVG() << endl << endl;
	}

}

