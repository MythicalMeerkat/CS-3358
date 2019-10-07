#pragma once

/*
Jeffrey Wilson
A04770255 - jaw291

Programming Project 2
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

student::student(string pass_name, string pass_ID, string pass_Address,
	double pass_GPA)
{
	name = pass_name;
	ID = pass_ID;
	Address = pass_Address;
	GPA = pass_GPA;
}

string student::getName()
{
	return name;
}

string student::getID()
{
	return ID;
}

string student::getAddress()
{
	return Address;
}

double student::getGPA()
{
	return GPA;
}