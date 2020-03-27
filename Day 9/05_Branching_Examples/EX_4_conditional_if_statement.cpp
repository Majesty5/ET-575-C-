// (c) 2018 S. Trowbridge
// Ex 4 - conditional if statement

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x, y;

    cout << "Conditional If Example" << endl;
    cout << "---------------" << endl;
    cout << "Enter two integers, each separated by a space: ";
    cin >> x >> y;
    cout << endl;

    cout << "Is " << x << " greater than or equal to " << y << "? " << endl << endl;

    // Single line if-else syntax.
    // expression ? true action : false action
    x >= y ? cout << "Yes it is" : cout << "No it isnt.";

    cout << endl;
    return 0;
}
