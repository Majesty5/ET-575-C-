// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {

    int x;
    do {
        cout << "Enter a value for x that is greater than 10: ";
        cin >> x;
        if(x > 10)
            break;
        else
            cout << x << " is not valid." << endl;
    } while(true);
    cout << x << " is valid" << endl;

    return 0;
}
