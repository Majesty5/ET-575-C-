// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

int main( ) {

    enum workDay { Monday, Tuesday, Wednesday, Thursday, Friday};
    int option;

    cout << "Days of the week:" << endl;
    cout << "0) Monday" << endl;
    cout << "1) Tuesday" << endl;
    cout << "2) Wednesday" << endl;
    cout << "3) Thursday" << endl;
    cout << "4) Friday" << endl;
    cout << "Select a day to take off: ";
    cin >> option;
    cout << endl;

    switch(option) {
    case Monday:
        cout << "You selected Monday." << endl;
        break;
    case Tuesday:
        cout << "You selected Tuesday." << endl;
        break;
    case Wednesday:
        cout << "You selected Wednesday." << endl;
        break;
    case Thursday:
        cout << "You selected Thursday." << endl;
        break;
    case Friday:
        cout << "You selected Friday." << endl;
        break;
    default:
        cout << "You did not make a valid selection." << endl;
    }

    cout << endl;
    return 0;
}
