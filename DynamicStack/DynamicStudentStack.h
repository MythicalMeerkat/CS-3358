// DynamicStudentStack.h : Entry point for the Dynamic Stack header
#pragma once

#include "stdafx.h"
#include <iostream>
#include "student.h"

using namespace std;

class DynamicStudentStack
{
private:
	struct studentNode
	{
		string node_name;
		string node_ID;
		string node_Address;
		double node_testAverage;
		int *testScoresRaw;

		studentNode *next;
	};

	studentNode *top;

public:

	DynamicStudentStack();
	~DynamicStudentStack();

	void push(student);
	void pop(student &);
	bool isEmpty();
	void displayStack();
};
