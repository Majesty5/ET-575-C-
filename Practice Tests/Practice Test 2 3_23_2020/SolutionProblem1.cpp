// Rashida Thomas
// ET 575
// Practice Test
// Problem # 1
// Due March 23, 2020

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
  /* Task:
  Code the following prompt and value input and value editing in a Do While Loop to make sure you have either 5,7,9,or 11

Request an odd number between 5 and 11 inclusive.
. */

int input;
int even=0;
int col;
int row;

do {
cout << "Enter any odd integer value between 5 and 11: ";
cin >> input;
if(input>=5 && input<=11)    //No semicolon after the if statement!
 {
break; // exit loop when value is valid
    }
     cout << " Follow the rules friend! " << endl << " Please input any odd integer value between 10 and 20 : ";
} while(true);// true condition creates an endless loop
cout <<"\nYou selected = "<< input << " great choice. "<< endl;




    return 0;
}
