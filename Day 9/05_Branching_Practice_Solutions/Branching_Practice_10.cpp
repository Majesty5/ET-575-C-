// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int x;
    cout << "Enter an integer x that is greater than 0: ";
    cin >> x;

    if(x <= 0) {
        cout << "x is not a valid value" << endl;
    } else {
        if(18%x == 0)
            cout << x << " is a factor of 18" << endl;
        else
            cout << x << " is not a factor of 18" << endl;
    }

    cout << endl;
    return 0;
}
