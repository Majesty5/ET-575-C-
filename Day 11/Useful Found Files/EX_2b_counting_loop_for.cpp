// (c) 2018 S. Trowbridge
// Ex 2b - counting loop - for

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // For Loop that counts from 1 to 10 inclusive.
    // (set iteration variable value; loop condition; update iteration variable)
    for(int i = 1; i < 11; i++) {
        cout << i << " ";                 // Action to repeat.
    }
    cout << endl << endl;

    // For Loop that counts from 20 down to 10 inclusive.
    // (set iteration variable value; loop condition; update iteration variable)
    for(int i = 20; i >= 10; i--) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
