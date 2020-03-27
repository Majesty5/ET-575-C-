// (c) 2018 S. Trowbridge
// Ex 7 - console input

#include <iostream>
#include <string>     // include the string library to use string variables
using namespace std;

int main()
{
    string name;    // declare a string variable named lastname
    string age;         // declare a string variable named age

    // Request a name from the console.
    cout << "What is your last name?" << endl;
    // Store the console input into a variable.
    cin >> name;
    cout << endl;

    // Request an age from the console.
    cout << "What is your age?" << endl;
    // Store the console input into a variable.
    cin >> age;
    cout << endl;

    // Output the values of the variables.
    cout << "Your last name is "
         << name
         << " and your age is "
         << age
         << "."
         << endl;
cout << name [4] << endl;
    return 0;
}
