// Rashida Thomas
// ET 575
// Week 10 Functions 2
// Practice Problem # 2
//Classwork April 2, 2020

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/* Task:
Convert the swap code from the problem 1 into a swap function with two integer parameters.
Call the swap function to swap the values of the variables.
Print the variable values before and after the function call.
What is the total memory allocation of this program?
Output Example
Enter two integers: 10 5 x is 10, y is 5(Before swap function)
Swapped Values:x is 5, y is 10(After swap function)*/

void swap(int &x, int &y); //Function Declaration ; required because I am finished with creating the declaration


int main()
{

  cout << endl;
  //variables to be used in this scope
  int x;
  int y;
  // int z; //integer placeholder to allow the swap to take place


   cout << " Please enter two integers: " << endl; // Assign values to the variables
   cin >> x;
   cin >> y;

   cout << "x = " << x << endl;   // Display original value to the user
   cout << "y = " << y << endl;  // Display original value to the user
   cout << endl;
   cout << x << "    &   " <<y << endl;  // Display original values to the user

  cout << endl;
  cout << "******" << " Abracadabra " << "******" << endl; // Show the user that magic is happening
  cout << endl;

  swap (x,y); //Function Call Since x & y are the only variables declared in the scope, they are the only ones that can be invoked for the function call

  // cout << x << "    &      " <<y << endl;

  cout << "x = " << x << endl; // Display reassigned (swapped) values to the user
 cout << "y = " << y << endl;



return 0;
}
void swap(int &x, int &y)  //Function Defintion The variables being passed through the parameters have to be consistent within the defining code block as well as match the declaration
{                           // int &r or int &x but I must be consistent
  int z;
  z=x; //integer placeholder to allow the swap to take place
  x=y;
  y=z;
} //The code block brackets finish the Declaration of swap ()
