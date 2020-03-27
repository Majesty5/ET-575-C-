// s. trowbridge 2020
#include <iostream>
using namespace std;

int main(void) {
    cout << endl;

    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(n%2==0) {
        cout << n << " is an even number. " << endl;
    } else if(n%2!=0) {
        cout << n << " is an odd number. " << endl;
    }

    cout << endl;
    return 0;
}
