// Rashida Thomas
// ET 575
// Practice Problem 1
// February 20, 2020
#include <iostream>
#include <iomanip>
#include <string>     // include the string library to use string variables
using namespace std;

int main()
{

//******************TASK******************************************************
  // Create a random Number for the following ranges
  //10-19
  //1-1000
  //0-20
srand (time (NULL));
int randomA;

cout << "Random Numbers: ";
cout << endl << endl;
randomA = rand() % 10 + 10;
cout << randomA << endl;

cout << endl << endl;

int randomB;

randomB = rand() % 1000 + 1;
cout << randomB << endl;
cout << endl << endl;

int randomC;

randomC= rand() % 20 + 1;
cout << randomC << endl;
// cout << "Please enter the width of the rectangle: ";
// cout << " The area of the rectangle is " << (length * width) << endl;

    return 0;
}
