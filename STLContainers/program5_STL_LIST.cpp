// program5_STL_LIST.cpp : Defines the entry point for the console application.

// Jeffrey Wilson
// Dr. Hwang : CS3358

// Programming Project 5A : STL List

#include "stdafx.h"
#include "student.h"
#include <iostream>
#include <list>

using namespace std;

void printArray(student*, const int);
void showList(list<student>);

int main()
{
	// Defining and Populating an Unordered Array
	const int SIZE = 15;
	student *recordsArray;
	recordsArray = new student[SIZE];

	recordsArray[0] = { "Jim", "A123", "TXST 123", 2.00};
	recordsArray[1] = { "Kelly", "A111", "TXST 444", 2.15 };
	recordsArray[2] = { "Donnie", "A157", "Vistas", 2.19 };
	recordsArray[3] = { "Mclovin", "A453", "Flowers", 2.20 };
	recordsArray[4] = { "Stacy", "A983", "Sterry", 2.75 };
	recordsArray[5] = { "Megan", "A007", "Capstone", 2.81 };
	recordsArray[6] = { "Tristan", "A113", "Junction", 2.90 };
	recordsArray[7] = { "Billy", "A543", "Home", 2.98 };
	recordsArray[8] = { "Sarah", "A777", "Copper", 2.99 };
	recordsArray[9] = { "Michelle", "A512", "San Jac", 3.00 };
	recordsArray[10] = { "Randy", "A210", "Tower", 3.43 };
	recordsArray[11] = { "Sharon", "A516", "San Gabe", 3.65 };
	recordsArray[12] = { "Shelly", "A645", "Falls", 3.68 };
	recordsArray[13] = { "Jeff", "A646", "Commons", 3.86 };
	recordsArray[14] = { "Rachel", "A282", "Sayers", 3.99 };

	cout << "--- Printing Unordered Array ---" << endl;
	printArray(recordsArray, SIZE);

	// Create and Populate List with Data from the Array Above
	list<student> studentList;
	for (int i = 0; i < SIZE; ++i)
	{
		studentList.push_back(recordsArray[i]);
	}

	// Display the List
	showList(studentList);

	// Delete an element 'M' from list, given a GPA
	double valToDelete;
	cout << "Enter a GPA Value to delete from the list: ";
	cin >> valToDelete;

	for(auto parse_it = studentList.begin(); parse_it != studentList.end(); parse_it++)
	{
		if (parse_it->getGPA() == valToDelete)
		{
			cout << "Removed a student from the List!" << endl;
			parse_it = studentList.erase(parse_it);
		}
	}

	cout << endl;

	// Insterting a student into the List
	string name;
	string ID;
	string Address;
	double GPA;
	
	cout << "Enter the student's Name to insert: ";
	cin >> name;
	cout << "Enter the student's ID to insert: ";
	cin >> ID;
	cout << "Enter the student's Address to insert: ";
	cin >> Address;
	cout << "Enter the student's GPA to insert: ";
	cin >> GPA;

	student studentToInsert(name, ID, Address, GPA);
	bool inserted = false;
	for (auto it = studentList.begin(); it != studentList.end() && !inserted; it++)
	{
		if (it->getGPA() >= studentToInsert.getGPA())
		{
			studentList.insert(it, studentToInsert);
			inserted = true;
			cout << "Successfully inserted student!" << endl;
		}
	}

	showList(studentList);


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

void showList(list<student> listObject)
{

	cout << "---Displaying the LIST---" << endl;
	
	for (auto it = listObject.begin(); it != listObject.end(); it++)
	{
		cout << "Name: " << it->getName() << endl
			<< "ID: " << it->getID() << endl
			<< "Address: " << it->getAddress() << endl
			<< "GPA: " << it->getGPA() << endl << endl;
	}
}

