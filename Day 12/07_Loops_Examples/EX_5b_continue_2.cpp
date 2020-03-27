// (c) 2018 S. Trowbridge
// Ex 5b - continue 2

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "Enter a value for n: ";
    cin >> n;

    // Output all odd numbers from 1 to n
    for(int i=0; i <= n; i++) {
        if(i%2 == 0)
            continue;           // skip all even numbers
        cout << i << " ";
    }

    cout << endl;
    return 0;
}
