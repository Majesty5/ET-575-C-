// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

int main( ) {

    char option;

    cout << "Days of the week:" << endl;
    cout << "a) Monday" << endl;
    cout << "b) Tuesday" << endl;
    cout << "c) Wednesday" << endl;
    cout << "d) Thursday" << endl;
    cout << "e) Friday" << endl;
    cout << "Select a day to take off: ";
    cin >> option;
    cout << endl;

    if(static_cast<int>(option) <  97)
        option = static_cast<char>(static_cast<int>(option)+32);

    switch(option) {
    case 'a':
        cout << "You selected Monday." << endl;
        break;
    case 'b':
        cout << "You selected Tuesday." << endl;
        break;
    case 'c':
        cout << "You selected Wednesday." << endl;
        break;
    case 'd':
        cout << "You selected Thursday." << endl;
        break;
    case 'e':
        cout << "You selected Friday." << endl;
        break;
    default:
        cout << "You did not make a valid selection." << endl;
    }

    cout << endl;
    return 0;
}
