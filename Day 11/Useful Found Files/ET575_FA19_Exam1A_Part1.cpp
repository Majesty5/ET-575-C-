#include <iostream>
using namespace std;

int main() {
    cout << endl;


    // Q1
    string s = "Queensborough";
    cout << s.at(2) << " " << s[2] << endl; // prints e

    // Q2
    int a = 123515;
    cout << (a%23+9) << endl; // prints 14

    // Q3
    cout << s.substr(0,6) << endl; // prints "Queens"

    // Q4
    int n = 1;
    n-=9;
    n=n-9;
    cout << n << endl; // prints -17

    // Q5
    int b=6, c=4;
    b = ++c;
    cout << b << endl; // prints 5

    // Q6
    int d=2, e=4;
    bool f = 0;
    f = (e%d==0);
    cout << f << endl; // prints 1

    // Q7
    int g=10, h=3;
    cout << (static_cast<double>(g)/h) << endl; // prints 3.33333

    // Q8
    int i=23435;
    cout << (i%2==0 && !(h%3==0)) << endl; // prints 0 (false)

    // Q9
    int j = 29;
    cout << ((j/10)%10) << endl; // prints 2;

    // 10
    int k=65;
    cout << (static_cast<char>(k)) << endl; // prints A


    cout << endl;
    return 0;
}
