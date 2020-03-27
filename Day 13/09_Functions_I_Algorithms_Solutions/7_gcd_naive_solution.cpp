// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

// Counting down to the gcd reduces the total number of iterations.
// Starting from the min of a and b further reduces the number of iterations.
int gcd(int a, int b) {
    int gcd, min = a;             // 1. Assume a is the smaller value.
    if(b<a) min = b;              // 2. If b is smaller, set min to b.
    for(int i=min; i>=1; --i) {   // 3. Iterate from min down to 1.
        if(a%i==0 && b%i==0) {    // 3a. If i is a factor of a and b,
            gcd = i;              //     exit loop and return the gcd.
            break;
        }
    }
    return gcd;                   // 4. Return the gcd.
}

int main() {
    cout << endl;

    cout << "GCD(10, 8) = " << gcd(10, 8) << endl;
    cout << "GCD(36, 24) = " << gcd(36, 24) << endl;
    cout << "GCD(240, 64) = " << gcd(240, 64) << endl;

    cout << endl;
    return 0;
}
