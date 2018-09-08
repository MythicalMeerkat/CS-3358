/*
Jeffrey Wilson
A04770255 - jaw291

Programming Project 2
*/

// Defines entry point for .cpp file that defines the member functions for the
// student record linked list.

#include "recordsList.h"
#include <iostream>

using namespace std;

// Default Constructor

recordsList::recordsList()
{
    head = nullptr;
}

// Destructor

recordsList::~recordsList()
{
    Node *p;
    Node *n;

    p = head;

    while(p)
    {
        n = p->next;
        delete p;
        p = n;
    }
}

void recordsList::append(student student_object)
{
	Node *newNode;
	Node *nodePtr;

	newNode = new Node;
	
	newNode->Name = student_object.getName();
	newNode->ID = student_object.getID();
	newNode->Address = student_object.getAddress();
	newNode->GPA = student_object.getGPA();
	newNode->next = nullptr;

	if (!head)
		head = newNode;
	
	else 
	{
		nodePtr = head;

		while (nodePtr->next)
			nodePtr = nodePtr->next;

		nodePtr->next = newNode;
	}
}

void recordsList::displayRecords() const
{
	cout << "--- Displaying Records Linked List ---" << endl;

	Node *nodePtr;
	nodePtr = head;

	while (nodePtr)
	{
		cout << "Name: " << nodePtr->Name << endl
			 << "ID: " << nodePtr->ID << endl
			 << "Address: " << nodePtr->Address << endl
			 << "GPA: " << nodePtr->GPA << endl << endl;

		nodePtr = nodePtr->next;
	}
}
