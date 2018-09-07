/*
Jeffrey Wilson
A04770255 - jaw291

Programming Project 2
*/

// Defines the entry point for the .cpp student class file and its
// member functions.

#include "student.h"
#include <iostream>

using namespace std;

// Constructor

student::student(string pass_name, string pass_ID, string pass_Address,
                 double pass_GPA)
{
    name = pass_name;
    ID = pass_ID;
    Address = pass_Address;
    GPA = pass_GPA;
}
