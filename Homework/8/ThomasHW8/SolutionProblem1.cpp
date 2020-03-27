// Rashida Thomas
// ET 575
// Week 8 Functions I
// Problem # 1
// Homework Due March 23, 2020

/* Task:
1. Request an integer n from the console.
Write a function that accepts n as input and outputs the multiplication table
of n from 1 to n to the console. */

//***************************Referred to example 2b division function in Examples***************

/*
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// function prototypes/declarations
int multiply(int value1, int value2);

int main()
{

int n, multi;


cout << "Enter an integer value : ";
cin >> n;

for (int multi = 1; multi <=n; multi++)
// function call returns value to a variable
int product = multiply(multi, n);
  cout << multi << " * " << n << " = ";

cout << endl;
    return 0;
}
// function definitions
int multiply(int value1, int value2){
    int product = multi * n;
    return product; // returns the value of the 'product' variable
}
*/

// Rashida Thomas
// ET 575
// Week 8 Functions I
// Problem # 1
// Homework Due March 23, 2020

/* Task:
1. Request an integer n from the console.
Write a function that accepts n as input and outputs the multiplication table
of n from 1 to n to the console. */

//***************************Referred to example 2b division function in Examples***************

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// function prototypes/declarations
void multiply(int value1);

int main()
{

int n, multi;


cout << "Enter an integer value : ";
cin >> n;

// for (int multi = 1; multi <=n; multi++)
// function call returns value to a variable
// int product =
    multiply(n);
//   cout << multi << " * " << n << " = " << product;

cout << endl;
    return 0;
}
// function definitions
void multiply(int n)
{
    for (int multi = 1; multi <=n; multi++)
    // int product = multi * n;
      cout << multi << " * " << n << " = " << multi*n <<endl;
}
    // return product; // returns the value of the 'product' variable

//if you are not returning the value to the main use a void
