// (c) 2018 S. Trowbridge
// Ex 2c - counting loop with external variables 1

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int sum = 0, product = 1;
    int value;

    cout << "Enter a value: ";
    cin >> value;

    // The iteration variable counts up to value which determines the # of reptitions.
    // An external variable 'sum' is used to track the results of the computation.
    for(int i=1; i<=value; i++)
        sum += i;

    // The iteration variable counts up to value which determines the # of reptitions.
    // An external variable 'product' is used to track the results of the computation.
    for(int i=1; i<=value; i++)
        product *= i;

    cout << "\nSummation of all numbers from 1 to " << value
         << " is " << sum << "." << endl;
    cout << "\nProduct of all numbers from 1 to " << value
         << " is " << product << "." << endl;

    cout << endl;
    return 0;
}
