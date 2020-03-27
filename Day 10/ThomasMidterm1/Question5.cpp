#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

  int a;
  float b;
  float c;
  float d;
  int e;
  float f;

  cout << "*************** Converting a 4 digit number into two 2 digit numbers ***************"<< endl << endl;
  cout << "Enter any four digit value " << endl << endl;
  cin >> a;
  cout << " You entered " << a << endl << endl;
  cout << "*************** TA-DA ***************" << endl << endl;
  // cout << cout.precision(2)<< endl << endl;
  // cout.a[2,3];


  cin >> b;
  cout << "Enter a second value to be added to the denominator" << endl << endl;
  cin >> c;

  d= a/b+c;
  e=d;
  e = static_cast<int>(e);
  cout << " Real Number Division Quotient: " << d << endl << endl;
  cout << " Integer Division Quotient: " << e << endl << endl;


  return 0;
}
