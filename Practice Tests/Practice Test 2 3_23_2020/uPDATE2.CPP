// Rashida Thomas
// ET 575
// Practice Test
// Problem # 2
// Due March 23, 2020

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
  /* Task:
  Code just the nested loop the following diagram using row and col comparisons.

X * * * * * X
* X * * * X *
* * X * X * *
* * *  O * * *
* * X * X * *
* X * * * X *
X * * * * * X
 */


int col;
int row;


for (int row = 1; row <=7; row++)   //Outer loop
  {

    for (int col = 1; col <=7; col++)  // Inner loop
      {
        if (col==4 && row==4)

          cout << "O";
          else
        if (col==row || col==8-(row))  // If this evaluates as true, cout X otherwise cout *

            cout << "X";
           else
            cout <<  "*";

    }
            cout <<endl;
    }


    return 0;
}
