// (c) S. Trowbridge 2018
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int x;
    cout << "Enter an integer x: ";
    cin >> x;

    cout << "Is ("
         << x
         << " is odd AND "
         << x
         << " <= 20) OR "
         << x
         << " > 50? "
         << ((x%2!=0 && x<=20) || x>50) << endl;

    cout << endl;
    return 0;
}
