#pragma once

/*
Jeff Wilson
A04770255 - jaw291

Programming Project 9
*/

// Defines entry point for the student class header file.

#include "stdafx.h"
#include <string>


using namespace std;

class student {
private:
	string name;
	int ID;

public:
	student();
	student(string, int);

	string getName();
	int getID();
	void setName(string);
	void setID(int);
};
