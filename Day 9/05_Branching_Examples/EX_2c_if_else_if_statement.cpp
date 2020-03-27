// (c) 2018 S. Trowbridge
// Ex 2c - if-else-if statement

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

    // Multi-way if-else statement (related conditions).
    if( x > y ) // If x is greater than y, then cout and jump to line 33.
        cout << "X > Y" << endl << endl;
    else if(x < y) // Otherwise, if x is less than y, then cout and jump to line 33.
        cout << "X < Y" << endl << endl;
    else // If none of the above are true (x and y are equivalent), then cout.
        cout << "X == Y" << endl << endl;

    return 0;
}
