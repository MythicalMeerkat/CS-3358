// DynamicStudentStack.cpp : Entry point for the Dynamic Stack definitions

#include "stdafx.h"
#include "DynamicStudentStack.h"

using namespace std;

// Default Constructor will intitalize the top of the stack
// top = nullptr indicates an empty stack

DynamicStudentStack::DynamicStudentStack()
{
	top = nullptr;
}

// Destructor

DynamicStudentStack::~DynamicStudentStack()
{
	studentNode *nodePtr = nullptr;
	studentNode *nextNode = nullptr;

	nodePtr = top;

	while (nodePtr != nullptr)
	{
		nextNode = nodePtr->next;
		delete nodePtr;
		nodePtr = nextNode;
	}
}

void DynamicStudentStack::push(student student_object)
{
	studentNode *newNode = nullptr;

	newNode = new studentNode;
	newNode->node_ID = student_object.getID();
	newNode->node_name = student_object.getName();
	newNode->node_Address = student_object.getAddress();
	newNode->node_testAverage = student_object.getTestAVG();
	newNode->testScoresRaw = student_object.getRawScores();

	if (isEmpty())
	{
		top = newNode;
		newNode->next = nullptr;
	}
	else
	{
		newNode->next = top;
		top = newNode;
	}
}

void DynamicStudentStack::pop(student &student_object)
{
	studentNode *temp = nullptr;

	if (isEmpty())
	{
		cout << "FATAL ERROR! The Stack is empty!" << endl
			<< "No items were popped from the stack." << endl;
	}
	else
	{
		student_object.setName(top->node_name);
		student_object.setID(top->node_ID);
		student_object.setAddress(top->node_Address);
		student_object.setTestAVG(top->node_testAverage);
		student_object.setScoreSet(top->testScoresRaw);

		temp = top->next;
		delete top;
		top = temp;
	}
}

bool DynamicStudentStack::isEmpty()
{
	bool status;

	if (!top)
	{
		status = true;
	}
	else
	{
		status = false;
	}

	return status;
}

void DynamicStudentStack::displayStack()
{
	studentNode *nodeParser;
	nodeParser = top;

	cout << "--- Displaying the (Remaining) DYNAMIC Stack ---" << endl;

	while (nodeParser != nullptr)
	{
		cout << "Name: " << nodeParser->node_name << endl
			<< "ID: " << nodeParser->node_ID << endl
			<< "Address: " << nodeParser->node_Address << endl
			<< "Test Average: " << nodeParser->node_testAverage << endl << endl;

		nodeParser = nodeParser->next;
	}
}