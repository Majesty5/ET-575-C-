// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int x;
    cout << "Enter a value for x that is greater than 10: ";
    cin >> x;
    while(x <= 10) {
        cout << "Enter a value for x that is greater than 10: ";
        cin >> x;
    }
    cout << x << " is valid" << endl;

    cout << endl;
    return 0;
}
