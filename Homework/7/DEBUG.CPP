// Rashida Thomas
// ET 575
// Week 7 Nested Loops
// Problem # 2
// Homework Due March 16, 2020

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
  /* Task:
  1.  Request an integer value n.
 Output a n x n grid from 1 to n inclusive where the following is true:
 For each factor f of n:
 If the current row number is equivalent to f, output f X’s.
 Otherwise output blank spaces or lines (for non-factor rows).*/

 int n;
 int f;

 cout << "Enter any integer value: ";
 cin >> n;

 for (int row = 1; row <n; row++){
   if(n%row==0)
   {
  for (int col = 0; col<=row; col++) { // Inner loop Columns
   cout << "X"<< endl; }
   }

else
cout << " " << endl;
}



     return 0;
 }
