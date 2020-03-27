// (c) 2017 S. Trowbridge
// Ex 1c - function parameters 1

#include <iostream>
using namespace std;

// This function accepts a single input parameter of type integer.
int getNumber(int n);

int main() {
    // The function call must match the header of the function declaration.
    // In this case the function expects a single integer value, thus the number 5.
    int number = getNumber(5);
    cout << number << endl;
    return 0;
}

// This header of the definition must match the header of the declaration.
int getNumber(int n) {
  return n; // returns the value of the 'n' variable
}
