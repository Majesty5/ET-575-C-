// (c) 2017 S. Trowbridge
// Ex 1e - function parameters 3

#include <iostream>
using namespace std;

// Multiple parameters can be used as long as they have distinct names.
double getSum(int n1, double n2);

int main() {
    // Function call and input parameters must
    // match the header of the function declaration.
    double sum1 = getSum(5, 3.5);
    cout << sum1 << endl;

    // Variable or literals can be used as long as
    // they match the input parameter types.
    int x = 10;
    double y = 5.5;
    double sum2 = getSum(x, y);
    cout << sum2 << endl;

    return 0;
}

// Function definition must match the header of the function declaration.
double getSum(int n1, double n2) {
  return n1 + n2; // returns the value of the expression
}
//?? How does the function know to add the int and double values? There is no Operator?
//The Operator on line 28 gets applied to line 13 and line 20
//Is this done by implicit casting given that these are two different data types?
