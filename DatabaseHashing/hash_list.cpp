/*
Jeffrey Wilson
A04770255 - jaw291

Programming Project 9
*/

// Defines entry point for .cpp file that defines the member functions for the
// student record linked list, that will be used in the HASH TABLE.

#include "stdafx.h"
#include "hash_list.h"
#include <iostream>

using namespace std;

// Default Constructor

hash_list::hash_list()
{
	head = nullptr;
}

// Destructor

hash_list::~hash_list()
{
	hashNode *p;
	hashNode *n;

	p = head;

	while (p)
	{
		n = p->next;
		delete p;
		p = n;
	}
}

// Will add a node (comprised of info from a student object)
// to the end of a linked list

void hash_list::appendNode(student student_object)
{
	hashNode *newNode;
	hashNode *nodePtr;

	newNode = new hashNode;

	newNode->name = student_object.getName();
	newNode->ID = student_object.getID();
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

// Iterate through the Linked List and print out the contents of each node

void hash_list::displayList() const
{
	hashNode *nodePtr;
	nodePtr = head;

	while (nodePtr)
	{
		cout << "X ";
		nodePtr = nodePtr->next;
	}
	cout << endl;
}

bool hash_list::findItem(int searching_ID)
{
	hashNode *nodePtr;
	nodePtr = head;

	bool found_ID = false;
	while (nodePtr && !found_ID)
	{
		if (nodePtr->ID == searching_ID)
		{
			cout << "Name: " << nodePtr->name << endl
				<< "ID: " << nodePtr->ID << endl;
			found_ID = true;
		}
	}
	return found_ID;
}

