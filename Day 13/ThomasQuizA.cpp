// Rashida Thomas
// ET 575
// QUIZ A Nested Loops
// DUE March 16, 2020
#include <iostream>
#include <iomanip>
#include <string>     // include the string library to use string variables
using namespace std;

int main()
{

//******************TASK******************************************************
// Implement a two-dimensional image using a nested loop.
// 1) Create an integer constant DIM and set it equal to 5.
// 2) Use a nested loop to print the output in terms of DIM.

int i;
int k;

for ( i=1; i<=5; i++ ) // Outer loop colunms
{

   for ( k=1; k<=5; k++) // Inner loop rows
    // if (i%2==0)
      {
        if (i==1 || i==5 || k==1 || k==5)
     // if (k>=2 || k<=4)
    cout  <<" * " ;
    else
      cout << " - ";

     }
   cout  << endl;
   // else
   //  {
   //    if (k%2 ==0)
   //   cout << " - ";
   //   else
   //     cout<<" * ";
   //  }
   // cout << endl;

 }
    return 0;
}
