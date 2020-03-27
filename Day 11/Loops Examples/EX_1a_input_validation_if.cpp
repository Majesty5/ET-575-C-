// (c) 2018 S. Trowbridge
// Ex 1a - input validation - if

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // If (seeks values between 1 and 10 inclusve)
    // If the input value is invalid, repeat the request.
    // If the user enters an invalid value a second time,
    // the program will continue with the invalid value (not good!).
    if(n < 1 || n > 10) {
      cout << "Enter a number between 1 and 10: ";
      cin >> n;
    }

    cout << "\nn = " << n << " <- valid or invalid value, can't be trusted. " << endl;

    /*
     * some additional code that relies upon the correct value of n
     */

    return 0;
}
