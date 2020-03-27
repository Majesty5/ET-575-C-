// s. trowbridge 2019
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    double d;

    cout << "Enter a floating-point value: ";
    cin >> d;

    // step 1: Convert d into an integer (truncates the decimal information).
    int i = d;
    cout << "The integer value is: " << i << endl;

    // step 2: Subtract the integer version of d from the original value of d.
    double remaining = d-i;
    cout << "The remaining decimal value is: " << remaining << endl;

    cout << endl;
    return 0;
}
