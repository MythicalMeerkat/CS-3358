/*
Jeffrey Wilson
A04770255 - jaw291

Programming Project 4
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
	double pass_GPA, int *scoreSet)
{
	name = pass_name;
	ID = pass_ID;
	Address = pass_Address;
	testAverage = pass_GPA;
	testScoresRaw = scoreSet;
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

double student::getTestAVG()
{
	return testAverage;
}

int* student::getRawScores()
{
	return testScoresRaw;
}

void student::setName(string pass_name)
{
	name = pass_name;
}

void student::setID(string pass_ID)
{
	ID = pass_ID;
}

void student::setAddress(string pass_Address)
{
	Address = pass_Address;
}

void student::setTestAVG(double pass_TestAVG)
{
	testAverage = pass_TestAVG;
}

void student::setScoreSet(int *dataSet)
{
	testScoresRaw = dataSet;
}