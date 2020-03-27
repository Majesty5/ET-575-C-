// (c) 2017 S. Trowbridge
// Ex 1d - function parameters 2

#include <iostream>
using namespace std;

int getNumber(int n);

int main() {
    int x = 5;
    // A variable or a literal can be used as long as it matches the
    // input parameter type, in this case int.
    int num1 = getNumber(x);
    cout << num1 << endl;

    int num2 = getNumber(6);
    cout << num2 << endl;

    return 0;
}


int getNumber(int n) {
  return n;
}
