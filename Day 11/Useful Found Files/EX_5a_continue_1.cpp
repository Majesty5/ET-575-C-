// (c) 2018 S. Trowbridge
// Ex 5a - continue 1

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Continue Statement" << endl;
    cout << "------------------" << endl;

    cout << "For Loop:" << endl;
    // For loop that outputs 1 to 10 but skips 5.
    for(int i=0; i < 10; i++) {
        if(i == 5)
            continue;           // skip the rest of the code and goto the next iteration
        cout << i << " ";
    }

    cout << endl;
    return 0;
}
