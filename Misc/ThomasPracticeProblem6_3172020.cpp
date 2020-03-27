// Rashida Thomas
// March 12, 2020
// ET 575
// CPP Functions
// Practice Problem 3

#include <iostream>
#include <iomanip>
#include <string>     // include the string library to use string variables
using namespace std;

//**************TASK*********************
// Create a function cube() with an integer parameter n that returns the cube of n (n*n*n).
// Call this function to print the cube of 5.

int getN (int n)
{
  return n*n*n;
}

int main()
{
    // int n=0; //not necessary, but it works
    // getN(5);

    cout << getN(5) << endl;

    return 0;
}
