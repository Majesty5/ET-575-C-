// (c) S. Trowbridge 2018
// ET575 - Branching - Practice 16

#include <iostream>
using namespace std;

int main( ) {

    int option;

    cout << "Vending Machine" << endl;
    cout << "1) Coke" << endl;
    cout << "2) Sprite" << endl;
    cout << "3) Water" << endl;
    cout << "4) Ice tea" << endl;
    cout << "Select: ";
    cin >> option;
    cout << endl;

    switch(option) {
    case 1:
        cout << "You selected a Coke." << endl;
        break;
    case 2:
        cout << "You selected a Sprite." << endl;
        break;
    case 3:
        cout << "You selected a Water." << endl;
        break;
    case 4:
        cout << "You selected an Ice tea." << endl;
        break;
    default:
        cout << "You did not make a valid selection." << endl;
    }

    cout << endl;
    return 0;
}
