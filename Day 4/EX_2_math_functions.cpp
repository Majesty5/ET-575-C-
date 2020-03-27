// (c) S. Trowbridge 2019
// EX 2 Math Functions

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int root = sqrt(36);
    int power = pow(2,5);
    int absVal = abs(-50);
    int roundUp = ceil(6.8);
    int roundDown = floor(6.8);
    int rounded = round(6.8);

    cout << "Square root of 36 = \t\t" << root << endl << endl;
    cout << "2 to the 5th power = \t\t" << power << endl << endl;
    cout << "Absolute value of -50 = \t" << absVal << endl << endl;

    // round up to the nearest integer
    cout << "Ceiling function for 6.8 = \t" << roundUp << endl << endl;
    // round down to the nearest integer
    cout << "Floor function for 6.8 = \t" << roundDown << endl << endl;
    // round up or down to the nearest integer
    cout << "Round function for 6.8 = \t" << rounded << endl << endl;

    return 0;
}
