// Rashida Thomas
// ET 575
// Week 6 Iterations/Loops
// Homework Due March 9, 2020

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
  /* Task:
  1. Request an integer from the console.
  2. Input should be validated until it is between 1 and 100,000 inclusive.
  3. Output the sum of all digits in the input value*/

  int surprise;
  int sum=0;
  int c;


  cout << "Input any number from 1 through 100,000" << endl;
  cin >> surprise;

  if(surprise<1 || surprise>100000)
  { cout << "Follow the rules friend! " << endl << " Please input any number from 1 through 100,000" << endl;
  cin >> surprise;
  }

  while (surprise>0)
        { c=surprise%10; sum = sum +c; surprise= surprise/10;
        }


    cout << sum;

  return 0;
}
