// s. trowbridge 2019
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    double d;

    cout << "Enter a floating point value: ";
    cin >> d;

    // step 1: Convert d into an integer (truncates the decimal information).
    cout << "The integer value is: " << static_cast<int>(d) << endl;

    // step 2: Subtract the integer version of d from the original value of d.
    cout << "The remaining decimal value is: " << (d-static_cast<int>(d)) << endl;

    cout << endl;
    return 0;
}
