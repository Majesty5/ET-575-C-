// Rashida Thomas
// ET 575
// Practice Problem 2
// March 3, 2020
#include <iostream>
#include <iomanip>
#include <string>     // include the string library to use string variables
using namespace std;

int main()
{

//******************TASK******************************************************
//  Request an integer value x greater than 10 from the console. Use a while
// loop to repeatedly request a new value until it is greater than 10.

int x;

cout << "Please enter any integer greater than 10: "; //You have to request a value first

cin >> x;

while (x <=10) // Once the something is attempted, if the loop is needed, it starts and continues until the condition is met
{
  cout << "Please enter any integer greater than 10: ";

  cin >> x;

}
cout << x << " Is valid "<< endl;


    return 0;
}
