// Rashida Thomas
// ET 575
// Week 8 Functions I
// Problem # 2
// Homework Due March 23, 2020

/* Task:
2. Request two integers a and b from the console.
Write a function which accepts a and b as input parameters and iteratively calculates and returns the greatest common denominatorof both values.
Output the returned value of the GCD function.*/


#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int gcdFunction(int a, int b);

int main()
{
int a,b;
  cout << "Input two numbers of different values (a, b): " << endl;
  cin >> a >> b;

  int gcd =gcdFunction(a,b);
  cout << "The GCD of " << a << " and " << b << " is " << gcd <<" ." ;


  return 0;
}
// Function definition must match the header of the function declaration.
int gcdFunction(int a, int b)
 {
   int gfact=0;
   for (int i=1; i<=a; i++)
   {
     if (a%i==0 && b%i==0)
         gfact=i;
   }

  return gfact;

}


//
//
// for (int i=1; i<=a; i++) moda
// for (int i=1; i<=b; i++) modb
// //there may be multiple instances where moda==modb how do I select the greatest value?
// gcd=moda==modb
