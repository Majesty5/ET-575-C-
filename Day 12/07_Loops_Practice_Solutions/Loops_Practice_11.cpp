// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int minVal, maxVal;

    do {
        cout << "Enter a min and max: ";
        cin >> minVal >> maxVal;
        if(maxVal > minVal)
            break;
        cout << "Invalid values, max must be greater than min." << endl;
    } while(true);

    for(int i=maxVal-1; i>minVal; --i) {
        if(i%2 != 0)
            cout << i << " ";
    }

    cout << endl;
    return 0;
}
