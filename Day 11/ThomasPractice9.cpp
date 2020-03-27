// Rashida Thomas
// ET 575
// Practice Problem 9
// March 5, 2020
#include <iostream>
#include <iomanip>
#include <string>     // include the string library to use string variables
using namespace std;

int main()
{

//******************TASK******************************************************
//  Use a loop to print all integers from 10 to 30 EXCLUSIVE that are not muliples of 3
//Exclusive does not include the start and end value

int three;
for (int three = 11; three <30; three++)
  {
    if (three % 3 ==0)
    continue;

    cout << three << endl;
  } //endl couts a 20 lines vertical. " " gives you a single horizontal line with spaces
    return 0;
}
