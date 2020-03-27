// (c) 2018 S. Trowbridge
// Ex 1c - input validation - do while

#include <iostream>
using namespace std;

int main()
{
    int n;

    // Do while loop (seeks values between 1 and 10 inclusve)
    // While the input value is invalid, repeat the request until it is valid.
    // Do while will always state the request at least once, unlike a while loop.
    do {
      cout << "Enter a number between 1 and 10: ";
      cin >> n;
    } while(n < 1 || n > 10);

    cout << "\nn = " << n << " <- guarenteed valid value. " << endl;

    /*
     * some additional code that relies upon the correct value of n
     */

    return 0;
}
