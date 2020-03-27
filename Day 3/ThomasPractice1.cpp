// Rashida Thomas
// ET 575
// Practice Problem 1
// February 4, 2020
#include <iostream>
#include <string>     // include the string library to use string variables
using namespace std;

int main()
{
    string input;    // declare a string variable named firstname

  //TASK: Output a string one character at a time.
    //Request a text string of length of five from the console.
      cout << "Input any five letter word:" << endl;
      //Store the user input into a variable
      cin >> input;
      cout << endl;
    //Output the string one character at a time followed by a newline.
    cout << input;
    cout  << "\n ";
    cout  << "\n ";


    // Output the values of the variables.
    cout  << input [0];
    cout  << "\n ";
    cout  << input [1];
    cout  << "\n ";
    cout  << input [2];
    cout  << "\n ";
    cout  << input [3];
    cout  << "\n ";
    cout  << input [4];
    cout  << "\n ";

        //  << "\n "
        //  << firstname << "\t " << lastname
          //<< "\n "
        //  << firstname  << "\n " << lastname
        //  << endl;

    return 0;
}
