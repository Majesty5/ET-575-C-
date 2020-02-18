
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << endl;

    int a = 5;
    int z = 2;
    float f =5.3;
    int res;

//Example of explicit Casting
 f = static_cast<float>(a)/static_cast<float>(z);
 cout << f << endl;

//Example of imploit Casting

res = f *a;
cout << res << endl;

//If you use the term cast iti is explicit casting. If the work happens covertly and converting datatypes it is implicit


    return 0;
}
