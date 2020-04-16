// Rashida Thomas
// ET 575
// Week 12? Arrays 1
// Practice Problem # 2
// April 14, 2020

#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/* Task:
4. Create an array of integers of size CAPACITY where CAPACITY is 20.
Generate random values between 0 and CAPACITY for the entire array.
Print the randomly generated array.


Request an integer from the console.
Execute a Linear Search on the array for the specified integer.
If the integer is in the array print its index in the array.
A Linear Search iterates through the entire array checking to see if a specified element exists within the array.

Output Example
16 18 9 13 2 3 8 6 0 11 16 13 3 3 1 18 18 7 2 5 4

Enter an integer: 5
The element exists at index 18
*/
 int main() {

  srand(time(NULL));

 const int CAPACITY =20;
   int integers [CAPACITY];

for (int i=0; i <= CAPACITY; i++)

{
  integers[i]= (rand()%CAPACITY);

  cout << integers[i] << " ";
}
cout <<endl;

int z;
cout << " Please enter a number value between 1 and 20: " <<endl;
cin >> z;
cout <<endl;


for (int i=0; i<=CAPACITY; i++)
{ if (integers[i] == z)
  {
   cout << i << "  ";
 }
}




   return 0;
 }
