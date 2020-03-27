// Rashida Thomas
// Homework # 1 ET 575
// Problem 1
// Due: February 17, 2020
#include <iostream>
#include <string>     // include the string library to use string variables
using namespace std;

int main()
{

//*******************************TASK*************************************
              // 1. Request an uppercase letter.
              // Output the lowercase equivalent using explicit casting.
              // Comment each step of the algorithm in your program.
              // Example Output (input in bold italics)
              // Input an uppercase character: J
              // The lowercase equivalent is 'j'.
// Explicit Casting ******************************************************


    char upper;    // value 1 (uppercase letter)
    char lower;         // declare a string variable named lastname
    int charasint;

    // Request an uppercase letter from the user.
    cout << "Input any capital letter in the English alphabet" << endl;
    // Store the console input into a variable.
    cin >> upper;
    //Display input for user.
    cout << "You entered " << upper << endl << endl;
    // Output the lowercase equivalent using explicit casting
    charasint = static_cast<int>(upper); //Convert the char the user input into an integer
    charasint = charasint + 32;          // Add the casted value of the input that is now an int to 32 as the letter conversion from uppercase to lowercase requires addition of the numeric value 32.
    lower =  static_cast<char>(charasint); // set the lower value as the variable represented the sum of the casted input and 32



    // Result
    cout << "Your lowercase equivalent is " << lower << endl << endl << endl;

//***************************** EXPLICIT CASTING*******************
     // upper + 32 = lower;
     // lower = static_cast<char>(upper+32);
     // cout << "The lowercase equivalent of " << upper << " is " <<  lower << endl << endl << endl;

    return 0;
}
