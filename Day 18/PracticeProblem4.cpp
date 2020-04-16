// Rashida Thomas
// ET 575
// Week 10 Functions 2
// Practice Problem # 4
//Classwork April 8, 2020

#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/* Task:
Request an integer value between 2 and 10 inclusive from the console.
Write a void function with two integer parameters, number and base.
This function should randomly generate values of the specified base and store
them into the variable number.
Call this function from main and use it to print 20 values of the specified base.
A base is the set of characters used to represent numbers in the base number system.
Any base less then base 10 (decimal) has a range of 0 to base-1 characters.
For example base 2 (binary) includes the values {0,1}
while base 8 (octal)includes the values {0,1,2,3,4,5,6,7}.
This program must generate a new random sequence every time the program runs.

Output Example
Enter a base between 2 and 10 inclusive: 8
7 6 4 3 6 5 2 3 1 0 2 1 0 3 1 7 5 0 3 5
*/

void basic(int base, int &number);

int main() {

  cout <<endl;

  srand(time(NULL)); // Seeds are the intializer for the computer to understand
  // If the seed is the same, the numbers will not be random
  // Time is used  for the seed because it is constantly changing
  // Null means now - current time

  int b; //The base number | This is the maximum number in the range of random number that will be produced from {0,b}.

  cout << " Enter any number from 2 to 10 " << endl;
  cin >> b;
  {if (b<2 || b>10)
    cout << " Follow the rules please" << endl;
    cin >> b ;
  }

  int n;// Values are stored here
  for (int i=1; i<=20; i++)
  {
    basic(b,n);
    cout <<n<< " ";
  }


  return 0;
}

void basic(int base, int &number)
{
(base >=2 && base <=10); //Define base
number= rand()%base; //This limits the possible values produced by the random function.
//% Is the symbol used to indicate a limit NOT modulus
  // cout << base<< endl;
}
