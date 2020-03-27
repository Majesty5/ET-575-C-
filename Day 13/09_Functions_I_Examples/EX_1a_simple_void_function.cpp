// (c) 2017 S. Trowbridge
// Ex 1a - simple void function

#include <iostream>
using namespace std;

// Function declaration, includes return type, name and parameters.
// This must precede main, and ends with a semicolon.
void hello();

int main() {
    // Function call, includes function name and any parameters (none in this case)
    hello();
    return 0;
}

// Function definition, includes return type, name, parameters and
// function code which is stored within the curly braces {}.
void hello() {
  cout << "Hello, world!" << endl;
}
