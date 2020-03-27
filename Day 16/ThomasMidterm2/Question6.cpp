// Rashida Thomas
// March 26, 2020
// ET 575
// Midterm #2


/*
Q6.  Coding Question (you must code this problem and submit via Blackboard):

Start the Rows at 5 and Increment by 5.
Start the Columns at 10 and Increment by 10.
Keep everything as Integers.
Each cell represents  the Row / Column as a Percentage or (Row / Col * 100).

Using Nested Loops display  the following exactly as it is shown below:

                                                           Columns %
Rows       10        20       30       40       50       60        70       80        90

    5          50        25       16       12       10         8          7         6          5

    10       100       50       33        25      20        16        14       12        11

    15       150       75       50        37      30        25        21       18         16

    20       200     100       67        50      40        33        28       25         22

*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;



int main()
{

  cout << "                Columns %" << endl;
  cout << "Rows";

  for (int col=10; col<=90; col++)
      if (col%10==0)
   cout <<col << endl;
   {
     for (int row=5; row<=20; row++)
     if (row%5==0)
     cout << row <<endl;

     else
     cout << (row/col)*100 <<endl;;
   }




    cout << "yerrr" << endl;

    return 0;
}
