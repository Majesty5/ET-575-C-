// Rashida Thomas
// March 17, 2020
// ET 575
// Functions I
// Quiz C

#include <iostream>
#include <iomanip>
#include <string>     // include the string library to use string variables
using namespace std;

//**************TASK*********************
/* Implement a validation function.
1. Write a function that accepts three parameters:
    a. an integer value n to validate
    b. a minimum integer value
    c. a maximum integer values
2. The function returns true if the integer n is between the given minimum and maximum values (exclusive), false otherwise*/

// int n will be the value tested against the parameters
// int a will be the minimum value
// int z will be the maximum value

bool affirmative ( int n, int a, int z)
  {
    if(n > a && n < z)
    {
      return true;
    } else
      return false;

  }

int main()
{
   int n;
   int a;
   int z;

  cout << " Enter any value" << endl;
  cin >> n;

  cout << " Enter a minimum value" << endl;
  cin >>a;

  cout << " Enter any value greater than the minimum value" << endl;
  cin >> z;

      if(affirmative(n,a,z))
      {
        cout << " Value " << n << " is within the range. " << endl;
      }
        // if (false)
          else
      {
        cout  << " Value "<< n << " is not within the range. " << endl;
      }

    return 0;
}
