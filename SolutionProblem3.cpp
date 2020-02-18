// Rashida Thomas
// Homework # 1 ET 575
// Problem 3
// Due: February 17, 2020
#include <iostream>
#include <string>     // include the string library to use string variables
using namespace std;

int main()
{

//*******************************TASK*************************************
              // 1. Requesttwo floating-point values from the console.
              // Output the sum of the integer portion of both values.
              // Comment each step of the algorithm in your program.
              // Example Output (input in bold italics)
              // Enter a floating-point value: 12.43
              // Enter a floating-point value: 32.42
              //Sum of the integers: 47
// Explicit Casting ******************************************************


    float z;    // value 1 (first value input by user)
    float a;         // value 2 (second value input by user)
    int addZ;
    int addA;
    int za;

    // Request a floating-point value from the user.
    cout << "Input any whole number value with a decimal and two numbers to the right of the decimal: " << endl;
    // Store the console input into a variable.
    cin >> z;
    //Display input for user.
    cout << " You entered " << z << endl << endl;
    // Request a second floating-point value from the user.
    cout << "Input a second whole number value with a decimal and two numbers to the right of the decimal: " << endl;
    // Store the console input into a variable.
    cin >> a;
    //Display input for user.
    cout << " The second value you entered is " << a << endl << endl;
    // Output the lowercase equivalent using explicit casting
     addZ= static_cast<int>(z); //Convert the first value the user input into an integer from a float
     addA= static_cast<int>(a); //Convert the second value the user input into an integer from a float
     za = z + a;          // Add the casted values of the two inputs


    // Result
     cout << "The sum of the integers is " << za << endl << endl << endl;


    return 0;
}
