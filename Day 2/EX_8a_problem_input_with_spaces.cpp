// (c) S. Trowbridge 2018
// Ex 8a - problem for input with spaces

#include <iostream>
#include <string>
using namespace std;

int main() {

    string name;

    // Cin only reads up to the first whitespace character.
    cout << "What is your full name? ";
    cin >> name;
    cout << "Hello, " << name << "!" << endl;

    return 0;
}
