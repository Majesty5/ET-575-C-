// Rashida Thomas
// ET 575
// Practice Test
// Question# 6
// Due March 23, 2020

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
  /* Task:
  Coding Question (you must code this problem and submit via Blackboard):

  Using Nested Loops display  the following exactly as it is shown below:

                                                             Columns

  Rows
     1        2       3       4       5       6        7       8        9

      1          11      12      13     14    15      16     17     18      19

       2         21       22      23     24    25      26     27     28      29

       3         31       32      33     34    35      36      37    38      39

       4         41       42       43     44    45     46      47    48      49

 */

  cout << "                       Columns" << endl; //Length perimeter fence for table
  cout << "Rows" << endl;  //Width perimeter fence for table
for (int headl =1; headl <=9; headl++) //neighbor loop A for structure spanning the length heading Loop
{
  cout << setw(7) << right << headl << '\t' << endl;
}

 for (int head2 =1; head2 <=4; head2++) //neighbor loop B for structure spanning the width heading Loop
 {
   cout <<  head2  << endl;
 }

for (int row = 1; row <=4; row++)   //Outer loop
  {

    for (int col = 1; col <=9; col++)  // Inner loop
      {
         // (row*10+col==row)


            cout << row*10+col << " ";


    }
            cout <<endl;
    }


    return 0;
}
