// Rashida Thomas
// March 19, 2020
// ET 575
// CPP Recursive Functions
// Practice Problem 4

#include <iostream>
#include <iomanip>
#include <string>     // include the string library to use string variables
using namespace std;

//**************TASK*********************
/* Request a positive integer from the console.
Create a recursive function countDown() with an integer parameter n.
This function counts from n down to 1 and prints out each value followed by a newline character.
Call this function with various input values.*/

void countDown(int n)
{
  if (n>0) {
     countDown (n-1);  //Runs digits asscending
    cout << n <<endl << endl;
      // countDown (n-1);  //Runs digits descending

  }
}



int main()
{

  int r;

  cout << " Enter a positive value:    " ;
  cin>> r;
  countDown (r);

      return 0;
}
