// (c) 2018 S. Trowbridge
// Ex 2d - counting_loop_with_external_variables 2

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num, numOperations;

    cout << "Multiplication Table" << endl;
    cout << "--------------------" << endl;

    cout << "Enter the number to multiply: ";
    cin >> num;
    cout << "Enter the number of operations: ";
    cin >> numOperations;
    cout << endl;

    // Mulitplication table starts with 1, so i starts at 1.
    for(int i=1; i<=numOperations; i++)
        cout << i << " * " << num << " = " << i*num << endl;

    cout << endl;
    return 0;
}
