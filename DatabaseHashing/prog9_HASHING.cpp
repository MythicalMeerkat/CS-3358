// prog9_HASHING.cpp : Defines the entry point for the console application.
//
// Jeff Wilson
// CS3358 - Dr. Hwang

// Programming Project 9

#include "stdafx.h"
#include "student.h"
#include "hash_list.h"
#include <iostream>
#include <iomanip>
#include <cstdlib> // For Random Number Generation
#include <fstream> // For File Input
#include <ctime> // For seeding the random number generator

using namespace std;

int hashing_calculation(int, const int);
void print_hash_table(hash_list *, const int);

int main()
{
	const int RECORDS_SIZE = 30;
	const int HASH_TABLE_SIZE = 79;

	ifstream infile;
	infile.open("student_names_input.txt");

	if (!infile.is_open())
	{
		cout << "FATAL ERROR! File could not be opened." << endl
			<< "Jumping out of program!" << endl;
		exit(1); 
	}
	
	student records[RECORDS_SIZE];
	
	string name;
	int index = 0;
	int rand_ID = -1;
	srand(time(nullptr)); 
	while (infile >> name)
	{
		rand_ID = (10000 + rand() % (99999));
		records[index].setName(name);
		records[index].setID(rand_ID);
		cout << "Random ID " << rand_ID << " assigned to " << records[index].getName() << endl;
		index++;
	}

	hash_list HASH_TABLE[HASH_TABLE_SIZE];

	for (int i = 0; i < RECORDS_SIZE; ++i)
	{
		HASH_TABLE[hashing_calculation(records[i].getID(), HASH_TABLE_SIZE)].appendNode(records[i]);
	}

	print_hash_table(HASH_TABLE, HASH_TABLE_SIZE);

	int search_amount = 0;
	int ID_looking_for;
	bool found = false;
	cout << "How many searches to conduct: ";
	cin >> search_amount;
	for (int i = 0; i < search_amount; ++i)
	{
		cout << "Enter an ID to search for: ";
		cin >> ID_looking_for;

		found = HASH_TABLE[hashing_calculation(ID_looking_for, HASH_TABLE_SIZE)].findItem(ID_looking_for);
		if (!found)
		{
			cout << "Record not found!" << endl;
		}
	}
	
	return 0;
}

int hashing_calculation(int key, const int HASH_SIZE) 
{
	return (key % HASH_SIZE);
}

void print_hash_table(hash_list *hash_table, const int SIZE)
{
	cout << "--- Printing Hash Table (Object Locations) ---" << endl << endl;
	for (int index = 0; index < SIZE; ++index)
	{
		cout << (index + 1) << ": ";
		hash_table[index].displayList();
	}
}

