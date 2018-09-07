/*
Jeffrey Wilson
A04770255 - jaw291

Programming Project 2
*/

// Defines the enty point for the header file dictating the student class.

#include <string>
#include "student.h"

using namespace std;

class recordsList
{
  private:
    struct Node          // Each node represents a student
    {
        string Name;
        string ID;
        string studentAddress;
        double GPA;

        Node *next;      // points to next node in list
    };

    Node *head;          // the head pointer of the List

  public:
    recordsList();
    ~recordsList();

    void append(student*);
    void displayRecords() const;
};
