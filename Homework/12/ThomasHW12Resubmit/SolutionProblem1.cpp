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
int roll(int side);
int roll(int side, int rolls);

int main() {

  cout <<endl;

  srand(time(NULL));

  int input; //Value selected by user

  cout << " Enter the number of sides for a playing dice" << endl;
  cin >> input;

  cout << endl;
  int r;// Values of the roll
   // (r<=input);
     // (r=rand()%input);
   // (r <= 25);
  {

    // cout << input << " -sided: " <<endl;
      // cout << input << " -sided: " << rand()%input <<endl;
      cout << input << " -sided: " <<   roll(input) <<endl;
  }

  int r2;//second input # of rolls
  cout << " Enter the number of rolls for your playing dice" << endl;
  cin >> r2;
  {
    // roll(input + r);
    cout << roll(input, r2) << " rolls of a " << input << " sided die. " << endl;

  }
  return 0;
}

int roll(int side) //When you make a function with a return value it is its own variable
{
  int win;
  // win <= side;
  win = rand()%side;

  return win;


  // side = rand()%win;
} // Closing bracket for roll function with one parameter
int roll(int side, int rolls)
{
int sum=0;
side + rolls ==sum;
// cout << sum <<endl;

for (int i=0; i<=rolls; i++)
{
  sum=sum+roll(side);
}
return sum;

}// Closing bracket for roll function with two parameters
