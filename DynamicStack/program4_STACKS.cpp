// program4_STACKS.cpp : Defines the entry point for the console application.
// Jeffrey A Wilson
// CS 3358 - Dr. Hwang

#include "stdafx.h"
#include <iostream>
#include "StaticStudentStack.h"
#include "student.h"
#include "StudentTestScoresRAW.cpp"
#include "DynamicStudentStack.h"

using namespace std;

void printArray(student *, const int);

int main()
{

	// Implementation and Testing of the STATIC Stack

	testScores *rawScores = new testScores();
	const int SIZE = 10;

	student *recordsArray;
	recordsArray = new student[SIZE];

	recordsArray[0] = { "Jim", "A123", "TXST 123", rawScores->calculateStudentTestAverage(rawScores->scores1), rawScores->scores1 };
	recordsArray[1] = { "Kelly", "A111", "TXST 444", rawScores->calculateStudentTestAverage(rawScores->scores2), rawScores->scores2 };
	recordsArray[2] = { "Donnie", "A157", "Vistas", rawScores->calculateStudentTestAverage(rawScores->scores3), rawScores->scores3 };
	recordsArray[3] = { "Mclovin", "A453", "Flowers", rawScores->calculateStudentTestAverage(rawScores->scores4), rawScores->scores4 };
	recordsArray[4] = { "Stacy", "A983", "Sterry", rawScores->calculateStudentTestAverage(rawScores->scores5), rawScores->scores5 };
	recordsArray[5] = { "Megan", "A007", "Capstone", rawScores->calculateStudentTestAverage(rawScores->scores6), rawScores->scores6 };
	recordsArray[6] = { "Tristan", "A113", "Junction", rawScores->calculateStudentTestAverage(rawScores->scores7), rawScores->scores7 };
	recordsArray[7] = { "Billy", "A543", "Home", rawScores->calculateStudentTestAverage(rawScores->scores8), rawScores->scores8 };
	recordsArray[8] = { "Sarah", "A777", "Copper", rawScores->calculateStudentTestAverage(rawScores->scores9), rawScores->scores9 };
	recordsArray[9] = { "Michelle", "A512", "San Jac", rawScores->calculateStudentTestAverage(rawScores->scores_10), rawScores->scores_10 };

	printArray(recordsArray, SIZE);

	// Create and Populate the Stack
	StaticStudentStack studentInfoSTATIC(SIZE);
	for (int i = 0; i < SIZE; ++i)
	{
		studentInfoSTATIC.push(recordsArray[i]);
	}
	
	// Popping Students from the Stack
	student catchStudentOBJ;
	int amountToPop = 0;
	cout << "How many student records would you like to pop from the STATIC stack? ";
	cin >> amountToPop;
	cout << endl;

	for (int i = 0; i < amountToPop; ++i)
	{
		cout << "---Popping a student from the Records---" << endl;
		studentInfoSTATIC.pop(catchStudentOBJ);
		
		cout << "---Popped Student Info---" << endl << endl;
		cout << "Name: " << catchStudentOBJ.getName() << endl
			<< "ID: " << catchStudentOBJ.getID() << endl
			<< "Address: " << catchStudentOBJ.getAddress() << endl
			<< "Test Average: " << catchStudentOBJ.getTestAVG() << endl << endl;
	}

	// Print the Stack
	studentInfoSTATIC.displayStack();

	// Implementation and Testing of the DYNAMIC Stack
	// Using the same array as before ("recordsArray")

	printArray(recordsArray, SIZE);

	// Create and Populate the Stack
	DynamicStudentStack studentInfoDYNAMIC;
	for (int i = 0; i < SIZE; ++i)
	{
		studentInfoDYNAMIC.push(recordsArray[i]);
	}

	// Popping Students from the Dynamic Stack
	cout << "How many student records would you like to pop from the DYNAMIC stack? ";
	cin >> amountToPop;
	cout << "endl";

	for (int i = 0; i < amountToPop; ++i)
	{
		cout << "---Popping a student from the Records---" << endl;
		studentInfoDYNAMIC.pop(catchStudentOBJ);

		cout << "---Popped Student Info---" << endl << endl;
		cout << "Name: " << catchStudentOBJ.getName() << endl
			<< "ID: " << catchStudentOBJ.getID() << endl
			<< "Address: " << catchStudentOBJ.getAddress() << endl
			<< "Test Average: " << catchStudentOBJ.getTestAVG() << endl << endl;
	}

	// Print the Stack
	studentInfoDYNAMIC.displayStack();

	delete[] recordsArray;
	delete rawScores;

	return 0;
}

void printArray(student *records, const int length)
{
	cout << "--- Displaying All student Records ---" << endl;
	
	for (int i = 0; i < length; ++i)
	{
		cout << "Name: " << records[i].getName() << endl
			<< "ID: " << records[i].getID() << endl
			<< "Address: " << records[i].getAddress() << endl
			<< "Test Average: " << records[i].getTestAVG() << endl << endl;
	}
}



