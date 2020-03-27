// Rashida Thomas
// Homework # 1 ET 575
// Problem 1
// Due: February 3, 2020
#include <iostream>
#include <string>     // include the string library to use string variables
using namespace std;

int main()
{
    string firstname;    // declare a string variable named firstname
    string lastname;         // declare a string variable named lastname

    // Request the user's first name from the console.
    cout << "What is your first name?" << endl;
    // Store the console input into a variable.
    cin >> firstname;
    cout << endl;

    // Request the user's last name from the console.
    cout << "What is your last name?" << endl;
    // Store the console input into a variable.
    cin >> lastname;
    cout << endl;

    // Output the values of the variables.
    cout << "Your name is "
         << firstname << lastname
        // << " and seperated by a tab your name is "
         //<< firstname << "/t" << lastname
         //<< endl;
         //<< " seperated by a line your name is "
        //<< firstname  << "/n " << lastname
       << endl;

    return 0;
}
