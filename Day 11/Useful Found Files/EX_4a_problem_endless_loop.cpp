// (c) 2018 S. Trowbridge
// Ex 4a - endless loop

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // This loop will never stop running, because the condition is always true.
    while(true)
    {
        cout << "Loop" << endl;
    }

    cout << endl;
    return 0;
}
