// Rashida Thomas
// ET 575
// Practice Problem 8
// March 3, 2020
#include <iostream>
#include <iomanip>
#include <string>     // include the string library to use string variables
using namespace std;

int main()
{

//******************TASK******************************************************
// //   Use a loop to print all even integers from 40 to 20 inclusive
//  Output Example
//  40 38 36 34 32 30 28 26 24 22 20

//Use a for loop because the start and end values are known

int i;


for (int i =40; i>= 20; i=i-2) // The starting integer value is 40; the loop will stop when i is equal to 20; to ensure that only the even number prints, decrement by subtracting 2
{
  // cout << i << endl; Use this to Print a vertical list
  cout << i << " "; //use this format to print a horizontal list
}
    return 0;
}
