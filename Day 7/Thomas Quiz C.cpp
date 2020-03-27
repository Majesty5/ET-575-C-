// Rashida Thomas
// ET 575
// Quiz C
// February 18, 2020
#include <iostream>
#include <string>
using namespace std;

int main()
{

//*******************************TASK*************************************
              //Access the ASCII table value of a character.
              // 1. Request a lowercase letter.
              // 2. Print the uppercase equivalent of the input value to the console

              // Input an uppercase character: g
              // The lowercase equivalent is G.
// Explicit Casting ******************************************************


    char lower;    //// value 1 lowercase letter)
    char upper;    // value 2 (uppercase letter)
    int charasint; // placeholder to convert values from char to int and back again #casting

    // Request a lowercase letter from the user.
    cout << "Input any lowercase letter in the English alphabet" << endl;
    // Store the console input into a variable.
    cin >> lower;
    //Display input for user.
    cout << "You entered " << lower << endl << endl;
    // Output the uppercase equivalent using explicit casting
    charasint = static_cast<int>(lower); //Convert the char the user input into an integer
    charasint = charasint - 32;          // Subtract the casted value of the input that is now an int to 32 as the letter conversion from lowercase to uppercase requires subtraction of the numeric value 32.
    upper =  static_cast<char>(charasint); // set the lower value as the variable represented the sum of the casted input and 32



    // Result
    cout << "Your uppercase equivalent is " << upper << endl << endl << endl;



    return 0;
}
