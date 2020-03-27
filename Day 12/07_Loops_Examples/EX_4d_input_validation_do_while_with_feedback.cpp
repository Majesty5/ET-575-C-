// (c) 2018 S. Trowbridge
// Ex 4d - input validation - do while with feedback

#include <iostream>
using namespace std;

int main()
{
    int n;

    // Do while with feedback (seeks values between 1 and 10 inclusve)
    // Feedback (line 20) clarifies the error to the user.
    // Break (line 18) is used to exit loop when a desired condition is reached.
    do {
      cout << "Enter a number: ";
      cin >> n;
      if(n >= 1 && n <= 10) {
        break; // exit loop when value is valid
      }
      cout << "Invalid value, enter a value between 1 and 10 inclusive." << endl;
    } while(true); // true condition creates an endless loop

    cout << "\nn = " << n << " <- guarenteed valid value. " << endl;

    /*
     * some additional code that relies upon the correct value of n
     */

    return 0;
}
