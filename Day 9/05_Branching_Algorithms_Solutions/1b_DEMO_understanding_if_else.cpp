// s. trowbridge 2019
#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    cout << endl;

    // Demo this code, and review.

    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Line 14 might run.
    if(n%2==0) {
        cout << "IF: " << n << " is even.\n";
    }

    // Line 19 XOR 21. One line and only one line ALWAYS runs.
    if(n%2==0) {
        cout << "IF-ELSE: " << n << " is even.\n";
    } else {
        cout << "IF-ELSE: " << n << " is odd.\n";
    }

    // Line 26 XOR line 28. One line and only one line MIGHT run.
    if(n%4==0) {
        cout << "IF-ELSEIF: " << n << " is divisible by 4.\n";
    } else if(n%2 == 0){
        cout << "IF-ELSEIF: " << n << " is divisible by 2.\n";
    }

    // Line 33 XOR line 35 XOR line 37. One line and only one line ALWAYS runs.
    if(n%4==0) {
        cout << "IF-ELSEIF-ELSE_1: " << n << " is divisible by 4.\n";
    } else if(n%2 == 0){
        cout << "IF-ELSEIF-ELSE_1: " << n << " is divisible by 2.\n";
    } else {
        cout << "IF-ELSEIF-ELSE_1: " << n << " is not divisible by 2 or 4.\n";
    }

    // Line 45 will NEVER run, because the else if is a subset of the if (order matters).
    // Subsets should ALWAYS precede supersets in an if/else-if block.
    if(n%2==0) {
        cout << "IF-ELSEIF-ELSE_2: "<< n << " is divisible by 2.\n";
    } else if(n%4 == 0){
        cout << "IF-ELSEIF-ELSE_2: "<< n << " is divisible by 4.\n";
    } else {
        cout << "IF-ELSEIF-ELSE_2: "<< n << " is not divisible by 2 or 4.\n";
    }

    cout << endl;
    return 0;
}
