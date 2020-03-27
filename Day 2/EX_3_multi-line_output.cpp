// (c) 2018 S. Trowbridge
// Ex 3 - Multi-Line Output

#include <iostream>
using namespace std;

int main()
{
    // The text "Hello World" in double quotes is a string literal.
    cout << "Hello World" << endl;      // single line
    cout << endl;                       // insert a blank line


    cout << "Hello ";                   // notice the space after Hello
    cout << "World" << endl;            // note the endl command
    cout << endl;                       // insert a blank line


    cout << "Hello "                    // cout command stretches across
         << "World " << endl;           // multiple lines

    return 0;
}
