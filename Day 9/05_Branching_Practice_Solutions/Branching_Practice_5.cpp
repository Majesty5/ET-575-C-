// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int x;
    cout << "Enter an integer x: ";
    cin >> x;
    cout << endl;

    cout << "Is "
         << x
         << " a multiple of 3 and not a multiple of 7? "
         << (x%3==0 && x%7!=0) << endl;

    cout << endl;
    return 0;
}
