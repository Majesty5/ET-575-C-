// Rashida Thomas
// ET 575
// QUIZ A Nested Loops
// DUE March 16, 2020
#include <iostream>
#include <iomanip>
#include <string>     // include the string library to use string variables
using namespace std;

int main()
{

//******************TASK******************************************************
// Implement a two-dimensional image using a nested loop.
// 1) Create an integer constant DIM and set it equal to 5.
// 2) Use a nested loop to print the output in terms of DIM.

int n;

cout << " Input a number  \n";
cin >> n;

  cout <<" Factors of " << n << " are: ";

for (int i = 1; i<= n; i=i+1)
  {
    if (n % i == 0)
    cout << i << " ";


  };


    return 0;
}
