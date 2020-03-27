// Rashida Thomas
// ET 575
// Quiz C- Branching
// March 3, 2020
#include <iostream>
#include <iomanip>
#include <string>     // include the string library to use string variables
using namespace std;

int main()
{

//******************TASK******************************************************
// Determine if s number is even or odd.
//  1. Request integer a from the console
//  2. If a is even, output a is even.
//  3. If a is odd, output that a is odd.

int a;

cout << "Please enter a number: "; //You have to request a value first

cin >> a;

if (a%2==0)
  cout << a <<" is an even number ";

  if (a%2!=0)
    cout << a <<" is an odd number ";


    return 0;
}
