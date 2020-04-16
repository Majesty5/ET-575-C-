// Rashida Thomas
// ET 575
// Week 10 Functions 2
// Solution Problem # 2
// Homework DUE April 13, 2020

#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/* Task:
2. Request three different integers from the console.
a) Write a swap function that swaps two integer values.
b) Write a sort function which accepts three integers as input then sorts them from largest to smallest using the swap function.
c) Output the integers before and after sorting
Example 1 Output (input in bold italics)
Enter three different integers: 3 2 4
3 2 4
4 3 2
Example 2 Output (input in bold italics)
Enter three different integers: 15 23 63
15 23 63
63 23 15
*/

void swap(int &x, int &y, int &z); //Function Declaration ; required because I am finished with creating the declaration

void sort(int x, int y, int z);
int main()
{

  cout << endl;
  //variables to be used in this scope
  int x;
  int y;
  int z;
  // int z; //integer placeholder to allow the swap to take place


   cout << " Please enter three different integers of any value: " << endl; // Assign values to the variables
   cin >> x;
   cin >> y;
   cin >> z;

   cout << "x = " << x << endl;   // Display original value to the user
   cout << "y = " << y << endl;  // Display original value to the user
   cout << "z = " << z << endl;  // Display original value to the user
   cout << endl;
   cout << x << "    &   " <<y <<"    &   " <<z << endl;  // Display original values to the user

   cout << " The values will now be transformed" << endl;
  cout << endl;
  cout << "******" << " Abracadabra " << "******" << endl; // Show the user that magic is happening
  cout << endl;

  swap (x,y,z); //Function Call Since x,y & z are the only variables declared in the scope, they are the only ones that can be invoked for the function call

  // cout << x << "    &      " <<y << endl;

  cout << "x = " << x << endl; // Display reassigned (swapped) values to the user
 cout << "y = " << y << endl;
 cout << "z = " << z << endl;

//  sort (x,y,z); //Function Call Since x,y & z are the only variables declared in the scope, they are the only ones that can be invoked for the function call

 cout << " The values will now be reordered" << endl;
cout << endl;
cout << "******" << " Ala-Kazaam " << "******" << endl; // Show the user that magic is happening
cout << endl;

 sort (x,y,z); //Function Call Since x,y & z are the only variables declared in the scope, they are the only ones that can be invoked for the function call
return 0;
}
void swap(int &x, int &y, int&z)  //Function Defintion The variables being passed through the parameters have to be consistent within the defining code block as well as match the declaration
{                           // int &r or int &x but I must be consistent
  int a1;
  // int a2; I thought I needed a second holder value. I don't. :-)
  a1=x; //integer placeholder to allow the swap to take place
  x=y;
  y=z;
  z=a1;

} //The code block brackets finish the Declaration of swap ()

void sort(int x, int y, int z) //Function Defintion
{

if  ( z > y && y > x)
{ cout << z <<" "<< y <<" "<< x ;}

if  ( z > x && x > y)
{ cout << z <<" "<< x <<" "<< y ;}

if  ( x > y && y > z)
{ cout << x <<" "<< y <<" "<< z ;}

if  ( x > z && z > y)
{ cout << x <<" "<< z <<" "<< y ;}

if  ( y > z && z > x)
{ cout << y <<" "<< z <<" "<< x ;}

if  ( y > x && x > z)
{ cout << y <<" "<< x <<" "<< z ;}

// if  ( x > y  && x > z && y > z)
// { cout << x << y << z ;}
// if  ( z > y  && z > y && y > x)
// { cout << z << y << x ;}
// if  ( y > x  && y > z > x && z > x)
// { cout << y<< z << x ;}
//
}//The code block brackets finish the Declaration of sort ()
