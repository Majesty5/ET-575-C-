
// Rashida Thomas
// Quiz B ET 575
// February 4, 2020
#include <iostream>
#include <string>     // include the string library to use string variables
using namespace std;

int main()
{


    string quote;         // declare a string variable named quote

    // Request a famous quotation from the console.

        // Request the user to enter a famous quote in the console.
    cout << "Input a famous quote" << endl;
    // Store the console input into a variable.
    std::getline (std::cin,quote);

    cout << endl;
    //cout << "\"" << "Reality is that which, when you stop believing in it, doesn't go away." << "\"" << endl; //Model for format to print quotations to the console
    cout << "\"" << quote << "\"" << endl;


    return 0;
}
