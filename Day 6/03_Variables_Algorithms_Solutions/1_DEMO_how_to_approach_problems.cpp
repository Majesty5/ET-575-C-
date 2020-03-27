// s. trowbridge 2019
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    // DEMO - How to approach solving a problem:
    // a. Define an algorithm sequentially using steps (in English)
    // b. For each step, write the code (focus on one sub-problem at a time)
    // c. Verify that the algorithm works using print statements for each step

    char c;
    int i;

    // step 1: Request an uppercase letter from the console, store in c.
    cout << "Input a lowercase character: ";
    cin >> c;

    // step 2: Convert the value of c into its ASCII integer equivalent, then store in i.
    i = static_cast<int>(c);
    cout << "Line 22: " << c << " " << i << endl;

    // step 3: Reduce the value of i by 32, then store the updated value into i.
    i = i-32;
    cout << "Line 26: " << i << endl;

    // step 4: Convert the value of i into a char, then store in c.
    c = static_cast<char>(i);
    cout << "Line 30: " << c << " " << i << endl;

    // step 5: Output the converted char c.
    cout << "The uppercase equivalent is '" << c << "'." << endl;

    cout << endl;
    return 0;
}
