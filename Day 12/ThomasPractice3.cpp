// Rashida Thomas
// ET 575
// Practice Problem 3
// March 10, 2020
#include <iostream>
#include <iomanip>
#include <string>     // include the string library to use string variables
using namespace std;

int main()
{

//******************TASK******************************************************
//  Display an 8x8 checkerboard of x's and o's

// int row;
// int col;
for (int row = 0; row <7; row++)
  {

    for (int col = 0; col <7; col++)

    if (row%2==0)
        {
          if (col %2 ==0)
            cout << setw(5)<< "X";
          else
    cout << setw(5) << "O";
        }
      else
            {

              if (col %2 ==0)
                cout << setw(5) <<"O";
              else
        cout << setw(5)<< "X";
            }

            cout <<endl;
    }


    return 0;
}
