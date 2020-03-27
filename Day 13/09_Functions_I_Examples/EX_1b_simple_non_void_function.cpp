// (c) 2017 S. Trowbridge
// Ex 1b - simple non-void function

#include <iostream>
using namespace std;

// This function returns an integer value.
int getNumber();

int main() {
    // This function call returns an integer, so we assign the returned value
    // into a local variable of similar type for use later on in the main function.
    int number = getNumber();
    cout << number << endl;
    return 0;
}

// The return statement indicates what is returned.
// The return value, in this case 1, must match the return type, in this case int.
int getNumber() {
  return 1; // returns the literal value 1
}
