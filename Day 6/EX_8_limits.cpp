// (c) 2020 S. Trowbridge
// Ex 8 - limits

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << endl;

    int a;
    unsigned int b;
    long c;
    unsigned long d;
    long long e;
    unsigned long long f;

    cout << left << setw(15) << "type" << setw(10) << "size" << setw(20) << "min" << setw(20) << "max" << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << left << setw(20) << "int" << setw(5) << sizeof(a)  << setw(30) << INT_MIN << setw(20) << INT_MAX << endl;
    cout << left << setw(20) << "unsigned int" << setw(5) << sizeof(b)  << setw(30) << "0" << setw(20) << UINT_MAX << endl;
    cout << endl;

    cout << left << setw(20) << "long" << setw(5) << sizeof(c) << setw(30) << LONG_MIN << setw(20) << LONG_MAX << endl;
    cout << left << setw(20) << "unsigned long" << setw(5) << sizeof(f) << setw(30) << "0" << setw(20) << ULONG_MAX << endl;
    cout << endl;

    cout << left << setw(20) << "long long" << setw(5) << sizeof(f) << setw(30) << "0" << setw(20) << LLONG_MAX << endl;
    cout << left << setw(20) << "unsigned long long" << setw(5) << sizeof(f) << setw(30) << "0" << setw(20) << ULLONG_MAX << endl;

    cout << endl;
    return 0;
}
