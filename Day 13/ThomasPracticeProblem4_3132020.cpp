// Rashida Thomas
// March 12, 2020
// ET 575
// CPP Functions
// Practice Problem 4

#include <iostream>
#include <iomanip>
#include <string>     // include the string library to use string variables
using namespace std;

//**************TASK*********************
// Create a divide function with two integer parameters x and y that returns x/y using regular division. Call this function to divide 10 by 3.
// Output Example : 3.333333.

float getN (int x, int y) //Your desired output will be a float, so your function type should be a float from the beginning. The inputs are ints and can be static casted into floats as see on line 18
{
  return static_cast<float>(x)/static_cast<float>(y);
}

int main()
{
    // int n=0; //not necessary, but it works
    // getN(5);

    cout << getN(10,3) << endl;

    return 0;
}
