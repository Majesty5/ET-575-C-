// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int x;
    cout << "Enter an integer x: ";
    cin >> x;

    if(x%5==0)
        cout << x << " is a multiple of 5." << endl;
    if(x%3== 0)
        cout << x << " is a multiple of 3." << endl;

        cout << endl;

    return 0;
}
