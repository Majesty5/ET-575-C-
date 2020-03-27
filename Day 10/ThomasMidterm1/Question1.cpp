#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

  string s= "Introduction to C++";

  cout << s << endl << endl;
  cout << s.erase(0,15) << endl << endl;


  return 0;
}
