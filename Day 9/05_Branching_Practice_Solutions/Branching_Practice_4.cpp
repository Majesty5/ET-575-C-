// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int x = 3, y = 2, z = 1;

    cout << "Original: " << endl;
    cout << "(x > y) || (y == z) : " << ((x>y) || (y==z)) << endl;
    cout << "(y >= z) && !(x == 3) : " << ((y >= z) && !(x == 3)) << endl;
    cout << "(x < 4) || ((z == x) && !(x == 3)) : " << ((x < 4) || ((z == x) && !(x == 3))) << endl << endl;

    cout << "Negated: " << endl;
    cout << "(x <= y) && (y != z) : " << ((x <= y) && (y != z)) << endl;
    cout << "(y < z) || (x == 3) : " << ((y < z ) || (x == 3)) << endl;
    cout << "(x >= 4) && ((z != x) || (x == 3)) : " << ((x >= 4) && ((z != x) || (x == 3))) << endl << endl;

    cout << endl;
    return 0;
}
