// (c) 2018 S. Trowbridge
// Ex 7 - Casting Data Truncation

#include <iostream>
using namespace std;

int main()
{
    // This is an example of information loss as a result of implicit casting.
    const float PI = 3.14159265359;
    int truncated_PI = PI; // the number 3 is stored into truncated_PI

    cout << "Implicit Casting" << endl;
    cout << "----------------" << endl << endl;
    cout << "PI is approximately " << PI << ".\n\n";
    cout << "An implicit cast truncates PI to " << truncated_PI << ".\n";

    cout << endl;
    return 0;
}
