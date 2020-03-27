// Rashida Thomas
// ET 575
// Week 8 Functions
// Problem # 1
// Homework Due March 23, 2020

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
  /* Task:
  1. Request an integer from the console.
  2. If the number is a prime number, output that it is a prime.
  3. If the number is not a prime number, output all factors between 1 and n */

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
