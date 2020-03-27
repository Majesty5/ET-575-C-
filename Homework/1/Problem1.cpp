// Homework #1 Problem 1
//Rashida Thomams
//ET 575 Due Febraury 3, 2020

#include <iostream>
using namespace std;

int main()
{
  string firstname;
  string lastname;

  // Request users first name from the console.
    cout << "What is your first name?" << endl;
    // Store the console input into a variable.
  //  cin << firstname;
    cout << endl;

// Request users last name from the console.
    cout << "What is your last name?" << endl;
    // Store the console input into a variable.
    //cin << lastname;
    cout << endl;

    // Output the values of the variables.
    cout << "Your name is "
         << firstname " " lastname
         << "."
         << endl;

    cout << "Your name is "
         << firstname <<" /t" <<lastname
         << "."
        << endl;


  cout << "Your name is "
        << firstname <<" /n" <<lastname
        << "."
        << endl;
    return 0;
}
