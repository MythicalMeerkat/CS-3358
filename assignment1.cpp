// Jeffrey Wilson
// A04770255 - jaw291
// Assignment 1

#include <iostream>

using namespace std;

int main()
{
    cout << "--- Project 1 ---" << endl << endl;

    int integer_var = 9;
    cout << "Integer Variable Details:" << endl
         << "Value: " << integer_var << endl
         << "Address: " << &integer_var << endl
         << "Size of Variable (bytes): " << sizeof(integer_var)
         << endl << endl;

    bool display = true;
    cout << "Boolean Variable Details:" << endl
         << "Value: " << display << endl
         << "Address: " << &display << endl
         << "Size of Variable (bytes): " << sizeof(display)
         << endl << endl;

    /*
    Without the Static Cast, compiler interprets "&first_initial"
    as a string and will not display the proper address.
    */

    char first_initial = 'J';
    cout << "Character Variable Details:" << endl
         << "Value: " << first_initial << endl
         << "Address: " << static_cast<void *>(&first_initial) << endl
         << "Size of Variable (bytes): " << sizeof(first_initial)
         << endl << endl;

    short short_int = 99;
    cout << "Short Integer Variable Details:" << endl
         << "Value: " << short_int << endl
         << "Address: " << &short_int << endl
         << "Size of Variable (bytes): " << sizeof(short_int)
         << endl << endl;

    long long_int = 999;
    cout << "Long Integer Variable Details:" << endl
         << "Value: " << long_int << endl
         << "Address: " << &long_int << endl
         << "Size of Variable (bytes): " << sizeof(long_int)
         << endl << endl;

    float float_var = 3.14;
    cout << "Float Variable Details:" << endl
         << "Value: " << float_var << endl
         << "Address: " << &float_var << endl
         << "Size of Variable (bytes): " << sizeof(float_var)
         << endl << endl;

    double double_var = 123.456;
    cout << "Double Variable Details:" << endl
         << "Value: " << double_var << endl
         << "Address: " << &double_var << endl
         << "Size of Variable (bytes): " << sizeof(double_var)
         << endl << endl;

    long double long_double_var = 123456;
    cout << "Long Double Variable Details:" << endl
         << "Value: " << long_double_var << endl
         << "Address: " << &long_double_var << endl
         << "Size of Variable (bytes): " << sizeof(long_double_var)
         << endl << endl;

    double dou_array[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    cout << "Double Array Details:" << endl
         << "Value: " << dou_array[0] << ", " << dou_array[1] << ", "
         << dou_array[2] << ", " << dou_array[3] << ", "<< dou_array[4] << endl
         << "Address: " << &dou_array[0] << endl
         << "Size of Variable (bytes) " << sizeof(dou_array)
         << endl << endl;

    int int_array[5] = {1, 2, 3, 4, 5};
    cout << "Integer Array Details:" << endl
         << "Value: " << int_array[0] << ", " << int_array[1] << ", "
         << int_array[2] << ", " << int_array[3] << ", "<< int_array[4] << endl
         << "Address: " << &int_array << endl
         << "Size of Variable (bytes) " << sizeof(int_array)
         << endl << endl;

    int* p = &int_array[0];
    cout << "Integer Pointer Details:" << endl
         << "Value of pointer: " << p << endl
         << "Value at address being pointed to: " << *p << endl
         << "Address: " << &p << endl
         << "Size of Variable (bytes) " << sizeof(p)
         << endl << endl;

    double* q = &dou_array[0];
    cout << "Double Pointer Details:" << endl
         << "Value of pointer: " << q << endl
         << "Value at address being pointed to: " << *q << endl
         << "Address: " << &q << endl
         << "Size of Variable (bytes) " << sizeof(q)
         << endl << endl;

    return 0;
}

