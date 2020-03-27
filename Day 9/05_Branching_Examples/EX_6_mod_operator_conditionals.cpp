// (c) 2018 S. Trowbridge
// Ex 6 - evenly divisible

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter a number: ";
    cin >> num1;

    // even vs odd
    // Recall that % operator gives the remainder of a / b.
    if(num1 % 2 == 0) // If num / 2 has no remainder, it must be even.
        cout << num1 << " is even." << endl;
    if(num1 % 2 != 0) // if num / 2 has a remainder, it must be odd.
        cout << num1 << " is odd." << endl;
    cout << endl << endl;

    cout << "Select a number: ";
    cin >> num2;

    // If num1 / num2 has no remainder, then num1 is evenly divisble by num2.
    // Furthermore, if num1 % num2 == 0 AND num1 > num2 , num1 is a multiple of num2.
    // This can also be interpeted as num2 is a factor of num1.
    if(num1 % num2  == 0)
        cout << num1 << " is evenly divisible by " << num2 << "." << endl;
    else
         cout << num1 << " is not evenly divisible by " << num2 << "." << endl;

    cout << endl;
    return 0;
}
