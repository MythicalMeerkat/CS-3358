#pragma once

/*
Jeffrey Wilson
A04770255 - jaw291

Programming Project 9
*/

// Defines entry point for header file for linked list used in hash table

#include "stdafx.h"
#include <iostream>
#include "student.h"

using namespace std;

class hash_list
{
private:
	struct hashNode
	{
		string name;
		int ID;

		hashNode *next;
	};

	hashNode *head;

public:
	hash_list();
	~hash_list();

	void appendNode(student);
	void displayList() const;
	bool findItem(int); 
};
