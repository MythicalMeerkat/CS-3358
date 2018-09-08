/*
Jeffery Wilson
A04770255 - jaw291

Programming Project 2
*/

// Defines entry point for the student class header file.

#include <string>


using namespace std;

class student{
    private:
        string name;
        string ID;
        string Address;
        double GPA;

    public:
        student();
        student(string, string, string, double);
		
		string getName();
		string getID();
		string getAddress();
		double getGPA();


};
