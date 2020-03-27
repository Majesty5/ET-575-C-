// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

int main( ) {
    cout << endl;

    double x;

    cout << "Input an integer between 1 and 100 inclusive: ";
    cin >> x;
    cout << endl;

    // Is the original value of x equivalent to x casted to an integer?
    // If so, then x is a whole number (even if it is stored in floating point format)
    if(x == static_cast<int>(x)) {
        if(x >= 1 && x <= 100) // x is between 1 and 100 inclusive
            cout << x << " is an integer between 1 and 100 inclusive.";
        else
            cout << x << " is not between 1 and 100 inclusive.";
    }
    else {
        cout << x << " is not an integer." << endl;
    }

    cout << endl;
    return 0;
}
