// s. trowbridge 2019
#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    cout << endl;

    double a;
    cout << "Input a positive floating-point number: ";
    cin >> a;

    cout << "a = " << a << endl;
    cout << "a rounded up: " << ceil(a) << endl;
    cout << "a rounded down: " << floor(a) << endl << endl;

    double b;
    cout << "Input a negative floating-point number: ";
    cin >> b;

    cout << "b = " << b << endl;
    cout << "b rounded up: " << ceil(b) << endl;
    cout << "b rounded down: " << floor(b) << endl << endl;

    cout << "b absolute value: " << abs(b) << endl;

    cout << endl;
    return 0;
}
