// Rashida Thomas
// March 26, 2020
// ET 575
// Midterm #2


/*
Q2. Code just the nested loop to create the following diagram using row and col comparisons.

*  *  * 1 1 *  *  *
*  *  * 2 2 *  *  *
*  *  * 3 3 *  *  *
1 2 3 4 5 6 7 8
1 2 3 4 5 6 7 8
*  *  * 6 6 * *  *
*  *  * 7 7 * *  *
*  *  * 8 8 * *  *

*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
  for  (int col=1; col <=8; col++)
    {for  (int row=1; row<=8; row++)

      if (row==4 || row==5);
      cout << col <<endl;
      else
       cout << " * ";
}

      // if (col==4 || col==5)
      // cout << row <<end

      // else
      //  cout << " * ";
    }
  ?


  return 0;
}
