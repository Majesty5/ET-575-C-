#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

  string no= " Introduction to c++ ";
  string yes;

  cout << no << endl << endl;
  cout << no.replace(17,1, "C") << endl << endl;


  return 0;
}
