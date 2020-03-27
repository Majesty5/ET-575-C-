// s. trowbridge 2020
#include <iostream>
using namespace std;

int main(void) {
    cout << endl;

    int x, y;
    cout << "Enter two integers, x and y, separated by a space: ";
    cin >> x >> y;

    if(x%y==0) {
        cout << y << " is a factor of " << x << endl;
    } else {
        cout << y << " is not a factor of " << x << endl;
    }

    cout << endl;
    return 0;
}
