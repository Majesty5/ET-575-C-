// (c) 2018 S. Trowbridge
// Ex 3b - nested if debugging statement

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x, y, z;

    cout << "Nested If Simple Sort" << endl;
    cout << "---------------------" << endl;
    cout << "Enter three different numbers, each separated by a space: ";
    cin >> x >> y >> z;
    cout << endl;

    // Permutation without Repetition (order matters)
    // 3! = 3 * 2 * 1 possible orders
    // x y z
    // x z y
    // y x z
    // y z x
    // z x y
    // z y x

   //cout <<  "y > z = " << (y > z) << endl;

    cout << "Numbers sorted from large to small: ";

    if((x > y) && (x > z))  // if true, run codeblock, else check next condition.
    {
        if(y > z) // (x > y > z)
            cout << x << " " << y << " " << z << endl;
        else // (x > z > y)
            cout << x << " " << z << " " << y << endl;

        //cout << "\ndebug: X block" << endl; // statement for debugging
    }
    else if((y > x) && (y > z))   // if true, run codeblock, else check next condition.
    {
        if(x > z) // (y > x > z)
            cout << y << " " << x << " " << z << endl;
        else // (y > z > x)
            cout << y << " " << z << " " << x << endl;

        //cout << "\ndebug: Y block" << endl; // statement for debugging
    }
    else if((z > x) && (z > y))   // if true, run codeblock, else exit if-else block.
    {
        if(x > y) // (z > x > y)
            cout << z << " " << x << " " << y << endl;
        else // (z > y > x)
            cout << z << " " << y << " " << x << endl;

        //cout << "\ndebug: Z block" << endl; // statement for debugging
    }

    cout << endl;
    return 0;
}
