// (c) 2018 S. Trowbridge
// Ex 3b - sentinal loop - with menu

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int option = 0;

    cout << "Menu with Sentinel Loop" << endl;
    cout << "---------------------------------" << endl;
    cout << endl;

    // This loop always runs unless the correct exit value is specified.
    // In this case the value 3 is the exit option in the menu.
    while(option != 3) {
        cout << "1) Option 1 " << endl;
        cout << "2) Option 2 " << endl;
        cout << "3) Exit Program " << endl; // exit option
        cout << "\nSelect option: ";
        cin >> option;
        cout << endl;

        // The option variable contains the number the user selected.
        // If the option variable is not set to 1, 2 or 3, the default
        // case is run, informing the user that they did not pick an available option.
        switch(option){
            case 1:
                cout << "You selected option 1." << endl << endl;
                break;
            case 2:
                cout << "You selected option 3." << endl << endl;
                break;
            case 3:
                cout << "You selected Exit Program, 3 is the sentinel value." << endl;
                break;
            default:
                cout << "You did not select an available option, try again." << endl << endl;
        }
    }

    cout << "\n\nExiting Program. " << endl;

    cout << endl;
    return 0;
}
