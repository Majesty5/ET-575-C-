// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

int main( ) {
    cout << endl;

    int x;

    cout << "Input an integer: ";
    cin >> x;

    // x is greater than 50 OR x is less than 0
    if(x > 50 || x < 0)
        cout << x << " is valid." << endl;
    else
        cout << x << " is invalid." << endl;

    cout << endl;
    return 0;
}
