
// Rashida Thomas
// Quiz B ET 575
// February 6, 2020
#include <iostream>
#include <string>     // include the string library to use string variables
using namespace std;

int main()
{

// Task: Implement a program that concatenates strings.

// Print the name variable to the console.
string first; // Request a first name from the console, and store in the variable first.
cout << "What is your first name?" << endl << endl;
cin >> first;

string last; // Request a last name from the console, and store in the variable last.
cout << "What is your last name?" << endl << endl;
cin >> last;

// Concatenate the values of first and last name into a new variable name. Make sure there us a space in between the first and last names.
// String concatenation.
cout << " Your name is: ";
string name = first + " " + last;
cout << name << endl << endl;





    return 0;
}
