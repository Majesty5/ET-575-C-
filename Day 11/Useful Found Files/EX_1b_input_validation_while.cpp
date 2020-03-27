// (c) 2018 S. Trowbridge
// Ex 1b - input validiation - while

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // While loop  (seeks values between 1 and 10 inclusve)
    // While the input value is invalid, repeat the request until it is valid.
    while(n < 1 || n > 10) {
      cout << "Enter a number between 1 and 10: ";
      cin >> n;
    }

    cout << "\nn = " << n << " <- guarenteed valid value. " << endl;

    /*
     * some additional code that relies upon the correct value of n
     */

    return 0;
}
