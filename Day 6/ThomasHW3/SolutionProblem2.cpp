// Rashida Thomas
// Homework # 1 ET 575
// Problem 2
// Due: February 17, 2020
#include <iostream>
#include <string>     // include the string library to use string variables
using namespace std;

int main()
{

//*******************************TASK*************************************
//Copy problem 1 to a new program.
//Rewrite the program using implicit casting.

              // 1. Request an uppercase letter.
              // Output the lowercase equivalent using explicit casting.
              // Comment each step of the algorithm in your program.
              // Example Output (input in bold italics)
              // Input an uppercase character: J
              // The lowercase equivalent is 'j'.
// Implicit Casting ******************************************************


    char upper;    // value 1 (uppercase letter)
    char lower;         // declare a string variable named lastname
    //int charasint;

    // Request an uppercase letter from the user.
    cout << "Input any capital letter in the English alphabet" << endl;
    // Store the console input into a variable.
    cin >> upper;
    //Display input for user.
    cout << "You entered " << upper << endl << endl;
    // Add the casted value of the input that is now an int to 32 as the letter conversion from uppercase to lowercase requires addition of the numeric value 32.
    lower = upper + 32;
    // Output the lowercase equivalent using explicit casting
    // Result
    cout << "Your lowercase equivalent is " << lower << endl << endl << endl;

//***************************** Implicit CASTING*******************
     // upper + 32 = lower; // This syntax will not work because you must 1. Declare It 2. Set It 3. Use It!
     //Line 38 worked once I inverted the variable sequence. As written on line 48, I kept gettign an error message. :-)


    return 0;
}
