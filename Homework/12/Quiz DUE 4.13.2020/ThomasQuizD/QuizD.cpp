// Rashida Thomas
// ET 575
// Week 10 Functions 2
// Solution Problem # 1
// Quiz D DUE April 13, 2020

#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/* Task:
Implement an offset function.
1) Write a void function which accepts two numbers as input parameters.
a) The first parameter is a number n to be offset.
b) The second parameter is an offset amount.
2) The function should offset the number n by the offset value.
Example: Given a number 5 and an offset of 3, the result is 8.
Given a number 1.5 and an offset of -5, the result is -3.5.
*/

void quizD(int &n, int &offset);

int main() {

  cout << endl;
  //variables to be used in this scope
  int input;
  // int y;
  // int z; //integer placeholder to allow the swap to take place


   cout << " Please enter any integer: " << endl; // Assign values to the variables
   cin >> input;

   cout << "You have entered : " << input << endl;   // Display original value to the user
    // Display original value to the user
   cout << endl;

  cout << endl;
  cout << "******" << " Abracadabra " << "******" << endl; // Show the user that magic is happening
  cout << endl;

  cout << "Tada " << endl;
  // quizD (input); //Function Call- Only variables declared in the scope can be invoked for the function call
  // cout << input << endl; // Display reassigned (swapped) values to the user
 // cout << "y = " << y << endl;


// Migos
int offset;
cout << "Enter an integer to offset:" << endl;
cin >> offset;
cout << endl;
cout << "Mind Blown!" << endl;
quizD (input, offset);

return 0;
}

void quizD(int &n, int &offset)
{
  // int increment;
  n=n+offset;
  cout << n <<endl;

  // offset = (*increment); // Point & dereference
  // if (increment>0) {
  //   cout << offset <<endl;

}
