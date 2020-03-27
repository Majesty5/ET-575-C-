// (c) 2018 S. Trowbridge
// Ex 3c - sentinel loop - with counter

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int number = 0;

    cout << "While Loop Sentinel" << endl;
    cout << "---------------" << endl;

    // Sentinel While Loop With Counter
    // Sometimes we want to track how many times the loop ran.
    int count = 0;                            // variable used to track # of loop executions
    while(number != -1) {
        cout << "Enter a positive integer or -1 to end loop: ";
        cin >> number;
        count++;                              // update # of loop executions
    }
    cout << endl;
    cout << "Sentinel value entered, loop ended." << endl << endl;
    cout << "Program Looped: " << count << " time(s)." << endl;
    return 0;
}
