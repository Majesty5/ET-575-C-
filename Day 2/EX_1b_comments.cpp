// (c) 2018 S. Trowbridge
// Ex 1b - Comments

// This is the syntax for a single-line comment.

/*
 * This is the syntax for a multi-line comment.
 * Comments are used to document your program.
 */



// include the iostream library to enable console input and output
#include <iostream>
// this statement declares that the program will use the standard name space
using namespace std;

/*
 * Main function
 * The main function runs the C++ program.
 * Return the integer 0 if the program runs successfully, other values if not
 */
int main()                              // the main function
{                                       // start of code block bracket
    cout << "Hello World" << endl;      // output text to console
    return 0;                           // returns a value of 0 to the operating system
}                                       // end of code block bracket
