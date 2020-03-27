// Rashida Thomas
// ET 575
// Week 8 Functions
// Problem # 2
// Homework Due March 23, 2020

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
  /* Task:
  Request two integers a and b from the console.
  Write a function which accepts a and b as input parameters and iteratively
  calculates and returns the greatest common denominator of both values.
  Output the returned value of the GCD function.
  The GCD is the largest shared factor between two or more numbers. */

  int surprise;
  int z;
  int b=0;
  int prime=0;
  int facts;


  cout << "Input any number" << endl;
  cin >> surprise;

  b=surprise/2;
  for(z=2; z<=b; z++)
    {
      if (surprise % z ==0)
      {
        cout <<"1"<< " is a factor of " << surprise%2;
        cout << " Not a prime number." <<endl;
        prime=1;
        // break;

      }
    }

    if (prime==0)
  { cout << " is a prime number. " << endl;

  }

  return 0;
}
