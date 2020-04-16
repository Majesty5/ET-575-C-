// Rashida Thomas
// ET 575
// Week 10 Functions 2
// Practice Problem # 4
//Classwork April 2, 2020

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/* Task:
Request an integer value between 2 and 10 inclusive from the console.
Write a void function with two integer parameters, number and base.
This function should randomly generate values of the specified base
and store them into the variable number.
Call this function from main and use it to print 20 values of the specified base.
A base is the set of characters used to represent numbers in the base number system. Any base less then base 10 (decimal) has a range of 0 to base-1 characters.
For example base 2 (binary) includes the values {0,1} while base 8 (octal)includes the values {0,1,2,3,4,5,6,7}.
This program must generate a new random sequence every time the program runs.
Output Example
Enter a base between 2 and 10 inclusive: 8
7 6 4 3 6 5 2 3 1 0 2 1 0 3 1 7 5 0 3 5
*/

void numberandbase (int number, int base); //Function Declaration ; required because I am finished with creating the declaration


int main()
{

  cout << endl;
  //variables to be used in this scope
   int y;
   int z; //integer placeholder to allow the swap to take place


   cout << " Please enter any integer between 2 and 10: " << endl; // Assign values to the variables
   cin >> y, z;


   cout << "You have entered : " <<y << z << endl;   // Display original value to the user
    // Display original value to the user
   cout << endl;

  cout << endl;
  cout << "******" << " Abracadabra " << "******" << endl; // Show the user that magic is happening
  cout << endl;

  numberandbase (y, z); //Function Call- Only variables declared in the scope can be invoked for the function call

  cout << "Tada ";
  cout << y << z << endl; // Display reassigned (swapped) values to the user
 // cout << "y = " << y << endl;



return 0;
}
void numberandbase (int number, int base);  //Function Defintion The variables being passed through the parameters have to be consistent within the defining code block as well as match the declaration
int y= 5;
if (y<10)
{
  cout << y <<endl;
}
 //The code block brackets finish the Declaration of swap ()
