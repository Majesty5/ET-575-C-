// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {

    int option = 0;

    while(option != 4) {
        cout << "Vending Machine" << endl;
        cout << "1) Coke" << endl;
        cout << "2) Water" << endl;
        cout << "3) Off" << endl;
        cout << "Select: ";
        cin >> option;
        cout << endl;

        switch(option) {
        case 1:
            cout << "You selected a Coke." << endl;
            break;
        case 2:
            cout << "You selected a Water." << endl;
            break;
        case 3:
            cout << "Program ending." << endl;
            break;
        default:
            cout << "Invalid option." << endl;
        }
        cout << endl;
    }

    return 0;
}
