// (c) 2018 S. Trowbridge
// Ex 2c - void and non-void functions

#include <iostream>
#include <string>
using namespace std;

// void functions
void hello( );
void goodbye(string name);

// non-void function, returns a string value
string getName( );

int main( ) {

    // The return value of getName() is stored into a variable.
    // That variable is used as an input parameter for goodbye();
    hello();
    string person = getName();
    goodbye(person);
    cout << endl;

    // The return value type of getName() matches the input parameter
    // type of goodbye(). Therefore the getName() function can act as an
    // input value to the goodbye() function.
    hello();
    goodbye(getName( ));
    cout << endl;

    return 0;
}

void hello( ) {
    cout << "Hello" << endl;
}
void goodbye(string name) {
    cout << "Goodbye " << name << ".\n";
}
string getName( ) {
    string name;
    cout << "What is your name? ";
    cin >> name;
    return name; // returns the value of the 'name' variable
}
