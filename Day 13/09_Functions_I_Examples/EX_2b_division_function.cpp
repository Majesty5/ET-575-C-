// (c) 2018 S. Trowbridge
// Ex 2b - division functions

#include <iostream>
#include <string>
using namespace std;

// function prototypes/declarations
double divide(double numerator, int denonimator);
int mod(int numerator, int denominator);

int main() {
    int x, y;

    cout << "Enter two integers (x y): ";
    cin >> x >> y;

    // function call returns value to a variable
    double q = divide(x, y);
    cout << "\nThe quotient of " << x << " and " << y << " is " << q << "." << endl;

    // inline function call returns value to the output stream
    cout << "\nThe remainder of " << x << " and " << y << " is " << mod(x, y) << "." << endl;

    cout << endl;
    return 0;
}

// function definitions
double divide(double numerator, int denonimator) {
    double quotient = numerator / denonimator;
    return quotient; // returns the value of the 'quotient' variable
}

int mod(int numerator, int denominator) {
    return numerator % denominator; // returns the literal value of the expression
}
