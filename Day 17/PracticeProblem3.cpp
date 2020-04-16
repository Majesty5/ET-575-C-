// Rashida Thomas
// ET 575
// Week 10 Functions 2
// Practice Problem # 3
//Classwork April 2, 2020

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/* Task:
3. Request an integer value from the console.
a) Create a void increment() function with one integer parameter n.
This function should increment the input value by 1.
b) Overload the increment() function with a second integer parameter offset.
This function should increment the input value by the offset value.
Call both functions with various values and confirm that they work.
What is the total memory allocation of this program?
Output Example
Enter an integer to increment: 5
6
Enter an integer offset: 10
16
*/

void increment(int &n); //Function Declaration ; required because I am finished with creating the declaration
// & Reference Address location of the variable
// * is a pointer and a dereference symbol
// A Pointer stores the memory address
// A pointer can be used to dereference an address
void increment(int &n, int &offset); //Overloading functions make the parameters slightly different
int main()
{

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
  increment (input); //Function Call- Only variables declared in the scope can be invoked for the function call
  // cout << input << endl; // Display reassigned (swapped) values to the user
 // cout << "y = " << y << endl;


// Migos
int offset;
cout << "Enter an integer to offset:" << endl;
cin >> offset;
cout << endl;
cout << "Mind Blown!" << endl;
increment (input, offset);

return 0;
}
void increment(int &n)  //Function Defintion The variables being passed through the parameters have to be consistent within the defining code block as well as match the declaration
{
  n=n+1;
  cout << n <<endl;


  // int n;
  // int *input=&n;
  // int increment;
  // int holder1;
  // int offset;
  // int holdermany;
    //
    // if (input>0) //3rd attempt
    // {
    //   &input++
    //   cout << input<<endl;
    // }

   // increment = (*input)+1;            //2nd attempt
   // if(input>0)  {
   // cout << increment << endl;}

//   int input;                        // 1st Attempt
//   if (input>0){
//   cout << input + 1 << endl;
// }
} //The code block brackets finish the Declaration of increment A ()
void increment(int &n, int &offset)
{
  // int increment;
  n=n+offset;
  cout << n <<endl;

  // offset = (*increment); // Point & dereference
  // if (increment>0) {
  //   cout << offset <<endl;

}
