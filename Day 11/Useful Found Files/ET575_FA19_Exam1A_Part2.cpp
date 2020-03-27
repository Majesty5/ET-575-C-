#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int x=1, y=2;
    cout << x << " " << y << endl;  // 1 2

    cout << (x>y) << endl;          // 0
    if(x>y) {
        x++;
    }
    cout << x << " " << y << endl;  // 1 2

    cout << (x%2!=0) << endl;       // 1
    if(x%2!=0) {
        x = ++y;
    }
    else {
        y = x++;
    }
    cout << x << " " << y << endl;  // 3 3

    y+=x;
    cout << x << " " << y << endl;  // 3 6

    cout << endl;
    return 0;
}
