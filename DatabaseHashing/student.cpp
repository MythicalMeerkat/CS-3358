/*
Jeffrey Wilson
A04770255 - jaw291

Programming Project 9
*/

// Defines the entry point for the .cpp student class file and its
// member functions.

#include "stdafx.h"
#include "student.h"
#include <iostream>

using namespace std;

// Default Constructor

student::student()
{
	return;
}

// Constructor

student::student(string pass_name, int pass_ID)
{
	name = pass_name;
	ID = pass_ID;
}

string student::getName()
{
	return name;
}

int student::getID()
{
	return ID;
}

void student::setName(string pass_name)
{
	name = pass_name;
}

void student::setID(int pass_ID)
{
	ID = pass_ID;
}