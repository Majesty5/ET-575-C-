// (c) 2018 S. Trowbridge
// Ex 3a - sentinel loop

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int number = 0;

    // Sentinel or State Based While Loop
    // This type of loop runs until a specified exit value,
    // known as a sentinel, flag or signal, is entered.
    //
    // The sentinel value should be something that could not be an acceptable data value.
    while(number != -1) {                     // -1 sentinel value
        cout << "Enter any positive integer or -1 to end loop: ";
        cin >> number;                        // obtain a new value for the number variable
    }
    cout << endl;
    cout << "Sentinel value entered, loop ended." << endl;
    return 0;
}
