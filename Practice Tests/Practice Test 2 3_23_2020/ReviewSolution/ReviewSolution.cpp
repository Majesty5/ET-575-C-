#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;


const float Pi = 3.142857;

void calcCircle(float radius)
{
float circumference = 2.0 * radius * Pi;
float area = Pi * pow(radius,2);
cout << "The circumference of a circle whose radius is " << radius << " is "<< circumference << endl;
cout << "The area of a circle whose radius is " << radius << " is "<< area << endl;

}

int main()


{

cout << "\n\nProblem No 1 \n\n";

/*
Q1. Code the following prompt and value input and value editing in a Do While Loop to make sure you have either 5,7,9,or 11

Request an odd number between 5 and 11 inclusive.

 */

    int oddint;

do {
  cout << "Enter a odd number between 5 and 11 inclusive > ";
  cin >> oddint;
} while( (oddint < 5) || (oddint > 11) || (oddint % 2 == 0));


cout << "\n\nProblem 2   \n\n";

/*
Q2. Code just the nested loop the following diagram using row and col comparisons.

X * * * * * X
* X * * * X *
* * X * X * *
* * * O * * *
* * X * X * *
* X * * * X *
X * * * * * X


 */

for (int row = 1; row <= 7; row++)
    {
    for (int col = 1; col <= 7; col++)
        {
        if ((col ==  4) && (row == 4))
            cout << "0 ";
        else
        if ((col == row) || (col == 7 - (row-1)))
            cout << "X ";
        else
            cout << "* ";
        }
    cout << endl;
    }

cout << "\n\nProblem 3   \n\n";

/*

Q3.  Create a function, named calcCircle that will pass a float value of radius that will output the Circumference and Area of a Circle.
 The equation of the circumference of a circle is :
Circumference = 2 * radius * Pi  (Pi = 3.142758.


 */

 float radius = 5.5;
 calcCircle(radius);

cout << "\n\nProblem 4   \n\n";

/*
Q4 .  Write the Loop Statements that will only display the numbers from 1 to 99 that contain a ‘7’ in it.


Output:

7  17  27  37  47  57  67 70  71 72  73  74  75  76  77 78  79  87  97


 */

for (int i = 1; i <= 99; i++)
    {
    if ((i % 10 == 7) || (i/10 == 7))
      cout << i << " ";
    }
cout << endl;




cout << "\n\nProblem 6   \n\n";

/*
Q6.  Coding Question (you must code this problem and submit via Blackboard):


Using Nested Loops display  the following exactly as it is shown below:

                                                           Columns
Rows       1        2       3       4       5       6        7       8        9

    1          11      12      13     14    15      16     17     18      19

     2         21       22      23     24    25      26     27     28      29

     3         31       32      33     34    35      36      37    38      39

     4         41       42       43     44    45     46      47    48      49

 */

cout << "                   Columns   " << endl; //Fence
cout << setw(10) << right << "Rows"; //Fence
for (int col = 1; col <= 9; col++) //neighor loop A Ranch
    {
    cout << setw(10) << right << col; //neighor A gate
    }
cout << endl;

for (int row = 1; row <= 4; row++) //neighor loop B Duplex
    {
    cout << setw(10) << right << row; //neighor B gate
    for (int col = 1; col <=9; col++)
        {
        cout << setw(10) << right << (row*10)+col;
        }
    cout << endl;
    }

cout <<endl;


return 0;
}
