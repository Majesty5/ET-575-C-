// (c) 2018 S. Trowbridge
// Ex 1b - evaluating_true_2

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int number;

    cout << "Boolean Evaluation" << endl;
    cout << "------------------" << endl;
    cout << "Enter a number greater than or equal to 1: ";
    cin >> number;
    cout << endl;

    // Recall that Boolean variables are only false for a 0 value.
    cout << number << " && true is equivalent to " << (number && true) << endl;

    return 0;
}
