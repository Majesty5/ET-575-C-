// (c) 2018 S. Trowbridge
// Ex 6- simple string and char variables

#include <iostream>
#include <string>     // include the string library to use string variables
using namespace std;

int main()
{
    cout << "-----------------------------------------------" << endl;

    // Creating string variables.
    // Syntax: variable_type variable_name = variable_value
    string today = "Monday";
    string tomorrow = "Tuesday";

    // The previously created variable is accessed by its name, such as "today".
    cout << "Today is " << today << "." << endl;
    cout << endl;

    cout << "Tomorrow is " << tomorrow << "." << endl ;
    cout << endl << "-----------------------------------------------" << endl << endl;

    // Creating character variables.
    // Syntax: variable_type variable_name = variable_value
    char someLetter = 'a';
    char someNumber = '1';
    char somePunctuation = '!';

    cout << "The character '" << someLetter << "' is a letter." << endl << endl;

    cout << "The character '" << someNumber << "' is a number." << endl << endl;

    cout << "The character '" << somePunctuation << "' is a form of punctuation." << endl << endl;
    cout << "-----------------------------------------------" << endl << endl;

    return 0;
}
