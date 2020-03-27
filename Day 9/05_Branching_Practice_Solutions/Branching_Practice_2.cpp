// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int x;
    cout << "Enter an integer x: ";
    cin >> x;

    cout << "Is "
         << x
         << " not a multiple of 5 (1 if it is, 0 if it not)? "
         << (x%5!=0)
         << endl;

    cout << endl;
    return 0;
}
