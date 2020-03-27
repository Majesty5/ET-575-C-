// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int minVal, maxVal;
    cout << "Enter a min and max value: ";
    cin >> minVal >> maxVal;

    for(int i=minVal; i <=maxVal; ++i) {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}
