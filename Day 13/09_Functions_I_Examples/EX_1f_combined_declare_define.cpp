// (c) 2017 S. Trowbridge
// Ex 1f - combined declare/define

#include <iostream>
using namespace std;

// Just like a variable can combine declaration and assignment,
// a function can combine declaration and definition.
// When combined, the declaration/definition must occur before main.
int getProduct(int n1, int n2) {
  return n1 * n2;
}

int main() {
    // A function that returns a primitive value can be used
    // inside a cout statement.
    cout << getProduct(5, 3) << endl;
    return 0;
}
