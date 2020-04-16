// Rashida Thomas
// ET 575
// Week 10 Functions 2
// Solution Problem # 1
// Homework DUE April 13, 2020

#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/* Task:
1.Emulate the rolling of dice.
a) Write a roll function which accepts the number of dice sides as input and returns the result of a random dice roll of the specified size.
b) Overload the roll function to accept the number of rolls as a second input parameter.
The overloaded function should return a random value
which is the sum of r rolls of an n sided die.
For example 2 d 9 is 2 rolls of a 9-sided die.
c) Test the first function with various dice sizes (see output).
d) Test the second function with various values (see output).
e) The program should generate new random values every time it runs.
Note that dice values start at 1.
Example Output (input in bold italics)
6-sided: 6
12-sided: 7
20-sided: 16
3d7: 11
2d8: 12
4d5: 7
*/
void roll(int side);
void roll(int side, int rolls);

int main() {

  cout <<endl;

  srand(time(NULL));

  int input; //Value selected by user

  cout << " Enter the number of sides for a playing dice" << endl;
  cin >> input;

  int r;// Values of the roll
   (r<=input);
  {
    roll(input);
    cout << input << " -sided: " << rand()%r;
  }


  return 0;
}

void roll(int side)
{
  int win;
  win <= side;
  side = rand()%win;
} // Closing bracket for roll function with one parameter
void roll(int side, int rolls)
{
// (base >=2 && base <=10);
// number= rand()%base;
  // cout << base<< endl;
}// Closing bracket for roll function with two parameters
