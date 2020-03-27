#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

  float a;
  float b;
  float c;
  float d;
  int x;


  cout << "*************** Let's Divide ***************"<< endl << endl;
  cout << "Enter a value for the numerator" << endl << endl;
  cin >> a;
  cout << "Enter a value for the denominator" << endl << endl;
  cin >> b;
  cout << "Enter a second value to be added to the denominator" << endl << endl;
  cin >> c;

  d= a/b+c;
  x=d;
  x = static_cast<int>(x);
  cout << " Real Number Division Quotient: " << d << endl << endl;
  cout << " Integer Division Quotient: " << x << endl << endl;


  return 0;
}
