// Rashida Thomas
// Practice Test 575
// Problem 1
// Due: February 24, 2020
#include <iostream>

using namespace std;

int main()
{

//*******************************TASK*************************************
              // 1. Write a single C++ statement that will:
              // Print the answer for regular division of the integers a divided by b.
              // For example , given int a=13, b=3, this statement would print 4.33333 etc.
//  ******************************************************

int a;
int b;
int z;
float buzz;

cout << " Input any numerator" << endl;
cin >> a;
cout << " Input any denominator" << endl;
cin >> b;
z = a/b;
buzz = static_cast<float>(z);

cout << "The solution is " << buzz << endl;
     return 0;
}
