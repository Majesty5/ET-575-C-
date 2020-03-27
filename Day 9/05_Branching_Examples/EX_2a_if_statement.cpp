// (c) 2018 S. Trowbridge
// Ex 2a - if-else statement

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x, y;

    cout << "If/Else Example" << endl;
    cout << "---------------" << endl;
    cout << "Enter two integers (X and Y), each separated by a space: ";
    cin >> x >> y;
    cout << endl << endl;

    cout << "Variables: " << endl;
    cout << "----------" << endl;
    cout << "X assigned to " << x << endl;
    cout << "Y assigned to " << y << endl << endl << endl;

    cout << "True Statements: " << endl;
    cout << "----------------" << endl;

    if(x > y)  // If x is greater than y, then cout.
        cout << "X > Y" << endl << endl;

    if(x > 0)  // If x is greater than 0, then cout.
        cout << "X > 0" << endl;

    if(x == y)  // If x is equivalent to y, then cout.
        cout << "X == Y" << endl;

    if(y > 10)  // If x is greater than 10, then cout.
        cout << "Y > 10" << endl;

    return 0;
}
