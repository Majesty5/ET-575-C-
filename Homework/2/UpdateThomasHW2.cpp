
// Rashida Thomas
// Homework # 2 ET 575
// Problem 1
// Due: February 10, 2020

#include <iostream>
#include <string>     // include the string library to use string variables
using namespace std;

int main()
{

// Task: String manipulation
// a. Create three string variables: first, last, name
// string first;
// string last;
// string name;
// b.Store your first name in first and last name in last.
string first = "Rashida";
string last = "Thomas";
string mid;
string name2 ;
// c.Concatenate the values of first and last with a space in the middle and store in the third variable name (such as "John Smith")
string name = first + " " + last;
// d. Output the variable name to the console.
cout << name << endl << endl;
// e. Output the length of the name variable.
cout << name.length() << endl << endl;
// f. Use string functions to insert a middle initial into the name variable including spaces (such as "John H. Smith").
  int pos1 = name.find(" ");
  // string name2 = name.substr(pos1+1),len1-(pos1+1));
  // string name2=name.substr(pos 1+1),len 1-(pos 1+1));
  string name2 = name;
  int pos2 = name.rfind(" " );
  size_t pos = 0;
   //size_t len = npos;
// g. Output the updated name variable.

cout << name << endl << endl;

// h. Access the string by index to output only the initials each seperated by a period (such as J.H.S.)
cout << name.at(0) << endl << endl;
cout << name.at(pos1+1) << " . " << endl << endl;
cout << name.at(pos2+1) << " . " << endl << endl;
// cout << name.find(" " + 1) << endl << endl;

cout << "What is your first name?" << endl << endl;
cin >> first;

 // Request a last name from the console, and store in the variable last.
cout << "What is your last name?" << endl << endl;
cin >> last;

// Request a last name from the console, and store in the variable last.
cout << "What is your middle name?" << endl << endl;
cin >> mid;

// Concatenate the values of first and last name into a new variable name. Make sure there us a space in between the first and last names.
// String concatenation.
cout << " Your name is: ";
string name2 = first + " " + last;
cout << name << endl << endl;





    return 0;
}
