// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

// Counting down to the gcd is faster then counting up.
// Starting from the min of a and b also reduces the total number of iterations.
int gcd(int a, int b) {
    int temp;
    while(b != 0) {
        cout << a << " " << b << endl;
        temp = b;
        b = a%b;
        a = temp;
    }
    cout << a << " " << b << endl;
    return a;
}

int main() {
    cout << endl;

    cout << "GCD(10, 8)\n" << gcd(10, 8) << endl;
    cout << "GCD(36, 24)\n" << gcd(36, 24) << endl;
    cout << "GCD(240, 64)\n" << gcd(240, 64) << endl;

    cout << endl;
    return 0;
}
