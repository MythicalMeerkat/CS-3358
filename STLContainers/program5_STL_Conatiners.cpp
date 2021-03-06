// program5_STL_Conatiners.cpp : Defines the entry point for the console application.

// Jeffrey Wilson
// Dr. Hwang : CS3358

// Programming Project 5B : STL Stack

#include "stdafx.h"
#include "student.h"
#include "StudentTestScoresRAW.cpp"
#include <iostream>
#include <vector>
#include <stack>

void printArray(student*, const int);
void showStack(stack< student, vector<student> >);

int main()
{
	// Object to hold the Raw Test Scores
	testScores *rawScores = new testScores();

	// Creating and Populating the Array of Student Data
	student *recordsArray;
	const int SIZE = 10;
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

	// Creating and Populating the STL Container Stack
	stack< student, vector<student> > studentStack;
	for (int i = 0; i < SIZE; ++i)
	{
		studentStack.push(recordsArray[i]);
	}

	// Popping from the Stack
	student catchStudentOBJ;
	int amountToPop = 0;
	cout << "How many student records would you like to pop from the stack? ";
	cin >> amountToPop;
	cout << endl;

	for (int i = 0; i < amountToPop; ++i)
	{
		catchStudentOBJ = studentStack.top();

		cout << "---Popped Student Info---" << endl << endl;
		cout << "Name: " << catchStudentOBJ.getName() << endl
			<< "ID: " << catchStudentOBJ.getID() << endl
			<< "Address: " << catchStudentOBJ.getAddress() << endl
			<< "Test Average: " << catchStudentOBJ.getTestAVG() << endl << endl;

		studentStack.pop();
	}

	showStack(studentStack);

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

void showStack(stack<student, vector<student> > stack_object)
{

	student catchStudentOBJ;
	
	cout << "--- Displaying the STL Stack ---" << endl;
	
	while (!stack_object.empty())
	{
		catchStudentOBJ = stack_object.top();

		cout << "Name: " << catchStudentOBJ.getName() << endl
			<< "ID: " << catchStudentOBJ.getID() << endl
			<< "Address: " << catchStudentOBJ.getAddress() << endl
			<< "Test Average: " << catchStudentOBJ.getTestAVG() << endl << endl;
		
		stack_object.pop();
	}
	cout << endl;
}

