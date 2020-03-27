// (c) S. Trowbridge 2019
// EX 6 exiting a program

#include <iostream>
using namespace std;

int main() {
    int option;

    cout << "Enter a 1 to exit a 2 to continue: ";
    cin >> option;
    cout << endl;

    if(option == 1)
        exit(1);      // exit the program early with a return value of 1

    cout << "You decided to continue the program.";

    cout << endl;
    return 0;
}
