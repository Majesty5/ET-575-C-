// Rashida Thomas
// ET 575
// Practice Problem 9
// March 5, 2020
#include <iostream>
#include <iomanip>
#include <string>     // include the string library to use string variables
using namespace std;

//******************TASK******************************************************
//  Create columns and rows like a multiplication table
int main()
{
    cout  << endl;
    cout << setw(5) << " ";
for (int col=1; col <=12; col++) //Colunm headings
    {
      cout << setw(5)<< right<<col;
    }
    cout << endl;



for (int row=1; row<=12; row++) //Outer row
    {
    cout <<setw(5)<< left<< row;
     //Row Headings
    for (int col=1; col <=12; col++) //Inner column
        {
        cout << setw(5)<<right << row*col;
        }
    cout << endl;

    }



    return 0;
}
