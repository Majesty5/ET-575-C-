#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int n, d;
    cout << "Enter a numerator and denominator: ";
    cin >> n >> d;

    if(n%d==0) {
        cout << "Answer: " << (static_cast<float>(n)/d) << endl;
    }
    else {
        cout << "Answer: " << (n/d) << " remainder " << (n%d) << endl;
    }

    cout << endl;
    return 0;
}
