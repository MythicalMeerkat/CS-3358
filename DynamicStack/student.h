#pragma once

/*
Jeffery Wilson
A04770255 - jaw291

Programming Project 4
*/

// Defines entry point for the student class header file.

#include "stdafx.h"
#include <string>


using namespace std;

class student {
private:
	string name;
	string ID;
	string Address;
	double testAverage;
	int *testScoresRaw;

public:
	student();
	student(string, string, string, double, int*);

	string getName();
	string getID();
	string getAddress();
	double getTestAVG();
	int* getRawScores();

	void setName(string);
	void setID(string);
	void setAddress(string);
	void setTestAVG(double);
	void setScoreSet(int*);

};
