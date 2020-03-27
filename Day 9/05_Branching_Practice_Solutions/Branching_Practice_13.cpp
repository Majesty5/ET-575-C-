// (c) S. Trowbridge 2020
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

    if(option == 1)
        cout << "You selected a Coke." << endl;
    else if(option == 2)
        cout << "You selected a Sprite." << endl;
    else if(option == 3)
        cout << "You selected a Water." << endl;
    else if(option == 4)
        cout << "You selected an Ice tea." << endl;
    else
        cout << "You did not make a valid selection." << endl;

    cout << endl;
    return 0;
}
