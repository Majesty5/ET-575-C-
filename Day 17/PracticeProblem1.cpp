// Rashida Thomas
// ET 575
// Week 10 Functions 2
// Practice Problem # 1
//Classwork April 2, 2020

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/* Task:
1. Request two integers from the console and store into two variables.
Write some code to swap the values of these variables.
Print the original and swapped values.
Output Example
Enter two integers: 10 5 x is 10, y is 5
Swapped Values:x is 5, y is 10
*/
void swap(int &x, int &y) //Function Declaration & Definition
{
  int z;
  z=x; //integer placeholder to allow the swap to take place 
  x=y;
  y=z;
}
int main()
{
  cout << endl;
  int x;
  int y;
  int z;

  cout << " Please enter two integers: " << endl;
  cin >> x;
  cin >> y;

  cout << "x = " << x << endl;
  cout << "y = " << y << endl;

  cout << endl;

  cout << "******" << " Abracadabra " << "******" << endl;

  swap(x, y); //Function Call

  cout << "x = " << x << endl;
  cout << "y = " << y << endl;

return 0;
}
