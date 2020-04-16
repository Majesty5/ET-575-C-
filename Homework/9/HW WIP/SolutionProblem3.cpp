/* Rashida Thomas
   ET 575
   Week 8 Recursion (Functions I)
   Problem # 2
   Homework Due March 30, 2020

***** TASK*****
3.Recursive GCD
a) Request two integers.
b) Implement a recursive GCD function which:
    1) accepts two integers as input
    2) returns the GCD
    3) outputs the process to the console (see example output)
    Example Output (input in bolditalics)
    Enter two integers: 48 27
    48 27
    27 21
    21 6
    6 3
    3
*/
#include <iomanip>
#include <iostream>
using namespace std;

int gcdFunction(int a, int b); // Function Declaration

int main(){
int a;
int b;
// int i;

  cout << "Input two numbers of different values (a, b): " << endl;
  cin >> a;
  cin >> b;

  int gcd =gcdFunction(a,b); // Function Call
   // if (a%i==0 && b%i==0)

  cout << "The GCD of " << a << " and " << b << " is " << gcd <<" ." ;


  return 0;
}
// Function definition must match the header of the function declaration.
int gcdFunction(int a, int b)  // Function Definition
 {
   int gfact=0;
   for (int i=1; i<=a; i++)
   {
     if (a%i==0 && b%i==0 || a>=b)
          // cout << gfact;
         gfact=i;
         // cout <<  a%i==0 <<  endl;
         cout <<   a<< " " << b <<  endl;
   }

  return gfact;

}
