// Rashida Thomas
// ET 575
// Week 5 Branching
// Homework Due March 2, 2020

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
  /* Task:
  1. Request two different intgers, a and b from the console.
  2. Request a third integer c from the consoles.
  3. Output if c is or is not a common factor of a and b.*/

  int a;
  int b;
  int c;


  cout << "Input an integer value" << endl;
  cin >> a;
  cout << "Input a second integer value" << endl;
  cin >> b;
  cout << "You entered " << a << " " << b << endl << endl;
  cout << "Enter a value that is a possible factor  " << endl << endl;
  cin >> c;
cout << endl <<  endl;
      // If a / c has no remainder, then a is evenly divisble by c.
      // Furthermore, if a % c == 0 AND a > c , a is a multiple of c.
      // This can also be interpeted as c is a factor of a.
      // If b / c has no remainder, then b is evenly divisble by c.
      // Furthermore, if b % c == 0 AND b > c , a is a multiple of c.
      // This can also be interpeted as c is a factor of b.
  if(a % c  == 0 && b % c  == 0 )
      //     cout << num1 << " is evenly divisible by " << num2 << "." << endl;
      // else
      //      cout << num1 << " is not evenly divisible by " << num2 << "." << endl;
  cout <<  c << " Is a common factor of  " << a << " & " << b << "." << endl << endl;
  else
       cout << c << " Is not a common factor of " << a << " & " << b << "." << endl << endl;

  return 0;
}
