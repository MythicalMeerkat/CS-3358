/*
Jeffrey Wilson
A04770255

Programming Project 2
*/

// Defines entry point for .cpp file that defines the member functions for the
// student record linked list.

#include "recordsList.h"

using namespace std;

// Default Constructor

recordsList::recordsList()
{
    head = nullptr;
}

// Destructor

recordsList::~recordsList()
{
    Node *p;
    Node *n;

    p = head;

    while(p)
    {
        n = p->next;
        delete p;
        p = n;
    }
}
