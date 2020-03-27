// (c) 2018 S. Trowbridge
// Ex 2a - counting loop - while

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i;                  // Declare an iteration variable.

    // While loop that counts from 1 to 10 inclusive (note condition).
    i = 1;                  // Set an initial value for the iteration variable.
    while(i < 11) {         // Set a condition where the loop will end
        cout << i << " ";   // Action to be repeated.
        i++;                // Update iteration variable so that loop eventually ends.
    }
    cout << endl;

    return 0;
}
