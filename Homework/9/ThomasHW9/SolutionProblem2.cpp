/* Rashida Thomas
   ET 575
   Week 8 Recursion (Functions I)
   Problem # 2
   Homework Due March 30, 2020

***** TASK*****
2.Recursive factorial.
a) Request an integer less than 10.
b) Implement a recursive function factorial which:
        1) accepts an integer n as input
        2) returns n! (n factorial)
        Example Output (input in bolditalics)
        Enter an integer less than 10: 5
        5! = 120
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int factorial (int n); // Function Declaration

int main()
{
  int n;
  cout << " Enter any number from 1 to 10: " << endl;
  cin >> n;

  if (n <=0 || n >10)
    do {
    cout << " Follow the rules friend! " << endl << " Enter any number from 1 to 10: ";
    cin >> n;
  }
    while (n <=0 || n >10);

      cout << n << " ! = " << factorial (n) << endl;           //Function Call

      cout << endl;
  return 0;
}

int factorial (int n) // Function Defintion
  {

    if(n > 1)
 return n * factorial(n - 1);
    else
        return 1;

  // if(n < 10)
  //     return 0;
  // return factorial (n / 10) * n;
  // return 1 + factorial (n / 10) * n;
  }



/*  if(n < 10)
   for (int i = 1; i<=10; i++)
 //   (n / 10) * i;
     {factorial (n / i) * n}
   return factorial (n) ;
   // return 1 + factorial (n / 10) * n;
   */
