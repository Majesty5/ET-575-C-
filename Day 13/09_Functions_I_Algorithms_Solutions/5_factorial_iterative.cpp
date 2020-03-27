// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

int factorial(int n) {
    int product = 1;
    for(int i=n; i>=1; --i) {
        product*=i;
    }
    return product;
}

int main() {
    cout << endl;

    int n;
    cout << "Enter a value for n: ";
    cin >> n;
    cout << "n! = " << factorial(n) << endl;

    cout << endl;
    return 0;
}
