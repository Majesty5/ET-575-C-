// Rashida Thomas
// ET 575
// Practice Problem 2
// February 13, 2020
#include <iostream>
#include <string>     // include the string library to use string variables
using namespace std;

int main()
{

//******************TASK******************************************************
  // Write a program that outputs the area of a rectangle. Request the value
  // of length and width from the user.
  // Output Example
  // AREA CALCULATOR:
  // ----------------
  // What is the length of the rectangle? 6.25
  // What is the width of the rectangle: 4.5
  // The rectangle’s area is 28.125.

float length;
float width;

cout << "Please enter the length of the rectangle: ";
cin >> length;
cout << "Thanks!" << endl;
cout << "Please enter the width of the rectangle: ";
cin >> width;
cout << " The area of the rectangle is " << (length * width) << endl;

    return 0;
}
