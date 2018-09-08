/*
Jeffrey Wilson
A04770255 - jaw291

Programming Project 2
*/

// Defines entry point for the calling routine (main)

#include <iostream>
#include "recordsList.h"

using namespace std;

void printArray(student*, const int);

int main()
{
	const int SIZE = 15;
    student *recordsArray;
    recordsArray = new student[SIZE];

	recordsArray[0] = {"Jim", "A123", "TXST 123", 3.54};
    recordsArray[1] = {"Kelly", "A111", "TXST 444", 3.00};
    recordsArray[2] = {"Donnie", "A157", "Vistas", 2.10};
    recordsArray[3] = {"Mclovin", "A453", "Flowers", 3.20};
    recordsArray[4] = {"Stacy", "A983", "Sterry", 3.15};
    recordsArray[5] = {"Megan", "A007", "Capstone", 2.81};
    recordsArray[6] = {"Tristan", "A113", "Junction", 3.50};
    recordsArray[7] = {"Billy", "A543", "Home", 1.60};
    recordsArray[8] = {"Sarah", "A777", "Copper", 2.99};
    recordsArray[9] = {"Michelle", "A512", "San Jac", 4.00};
    recordsArray[10] = {"Randy", "A210", "Tower", 2.43};
    recordsArray[11] = {"Sharon", "A516", "San Gabe", 3.95};
    recordsArray[12] = {"Shelly", "A645", "Falls", 3.58};
    recordsArray[13] = {"Jeff", "A646", "Commons", 3.56};
    recordsArray[14] = {"Rachel", "A282", "Sayers", 3.59};

	cout << "--- Printing Unordered Array ---" << endl;
	printArray(recordsArray, SIZE);

	// Linked List Practice

	recordsList studentRecords;
	
	//Populating the Linked List with the Data from the Array
	for (int i = 0; i < SIZE; ++i)
	{
		studentRecords.append(recordsArray[i]);
	}

	// Display the Linked List
	studentRecords.displayRecords();

    return 0;
}

void printArray(student *records, const int length)
{
	for (int i = 0; i < length; ++i)
	{
		cout << "Name: " << records[i].getName() << endl
			 << "ID: " << records[i].getID() << endl
			 << "Address: " << records[i].getAddress() << endl
			 << "GPA: " << records[i].getGPA() << endl << endl;
	}
}

