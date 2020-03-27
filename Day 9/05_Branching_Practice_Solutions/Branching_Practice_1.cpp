// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int x;
    cout << "Enter an integer x: ";
    cin >> x;

    cout << "Is " << x << " even (1 is it, 0 it not)? "
         << (x%2==0) << endl;


    cout << endl;
    return 0;
}
