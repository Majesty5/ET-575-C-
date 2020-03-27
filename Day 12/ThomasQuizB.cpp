// Rashida Thomas
// ET 575
// QUIZ B Loops
// March 10, 2020
#include <iostream>
#include <iomanip>
#include <string>     // include the string library to use string variables
using namespace std;

int main()
{

//******************TASK******************************************************
//  Write a loop to output all factors of n.
//  1. Request an integer value n.
//  2. Write a loop to output all factors of n.

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
