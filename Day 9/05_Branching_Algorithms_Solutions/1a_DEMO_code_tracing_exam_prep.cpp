// s. trowbridge 2019
#include <iostream>
using namespace std;

int main(void) {
    cout << endl;

    // Print out this code, ask students to figure out all print statements on paper.

    int a=1, b=2;

    cout << a << " " << b << endl << endl;

    cout << "a<=b: " << (a<=b) << endl;
    if(a<=b) {
        b++;
    }
    cout << a << " " << b << endl << endl;

    cout << "a%b==0: " << (a%b==0) << endl;
    if(a%b==0) {
        a = ++b;
    } else {
        b = a++;
    }
    cout << a << " " << b << endl << endl;

    b*=a;
    cout << a << " " << b << endl << endl;

    cout << endl;
    return 0;
}
