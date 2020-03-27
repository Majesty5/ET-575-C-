// Rashida Thomas
// ET 575
// Week 7 Nested Loops
// Problem # 1
// Homework Due March 16, 2020

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
  /* Task:
  Request an odd integer value between 10 and 20.
Input should be validated until correct.
Use a nested loop to output the below image. */

int input;
int even=0;
int col;
int row;

do {
cout << "Enter any odd integer value between 10 and 20: ";
cin >> input;
if(input>10 && input<20 && input%2!=0)    //No semicolon after the if statement!
 {
break; // exit loop when value is valid
    }
     cout << " Follow the rules friend! " << endl << " Please input any odd integer value between 10 and 20 : ";
} while(true);// true condition creates an endless loop
cout <<"\nYou selected = "<< input << " great choice. "<< endl;

// col=input;
// row=input;

for (int row = 1; row <input; row++)   //Outer loop
  {

    for (int col = 1; col <input; col++)  // Inner loop
      {

 // if (col==0 || col==input-1 || row==0 || row==input || col==row ||row==input-1|| input-col+1==row)
//Draw out the problem and your desired solutions

 if (row==0 || row==input-1 || col==0 || col==input-1 || row==col || col==input-row-1)



          // if (col %2 ==0)
            cout << "X";
           else
            cout <<  "-";


    }
            cout <<endl;
    }


    return 0;
}
