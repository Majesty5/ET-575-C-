// s. trowbridge 2020
#include <iostream>
using namespace std;

int main(void) {
    cout << endl;

    char c;
    cout << "Enter a character: ";
    cin >> c;

    if(c>='A' && c<='Z') {
        cout << c << " is an uppercase letter." << endl;
    } else if(c>='a' && c<='z') {
        cout << c << " is a lowercase letter." << endl;
    } else if(c>='0' && c<='9') {
        cout << c << " is a number." << endl;
    } else {
        cout << c << " is neither a number nor a letter." << endl;
    }

    cout << endl;
    return 0;
}
