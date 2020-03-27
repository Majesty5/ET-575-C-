#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

  cout << "**************************************************************"<< endl << endl;
  cout << left << setw(15) << " Number "  << setw(15)<< " Number Squared " << setw(15)<< " Square Root of Number " << endl;
  int a= 1;
  cout << left << setw(15) << a  << setw(15)<< " Number Squared " << setw(15)<< sqrt (a) << endl; 
  cout << left << setw(15) << " Number "  << setw(15)<< " Number Squared " << setw(15)<< " Square Root of Number " << endl;


  cout << "**************************************************************"<< endl;





  return 0;
}
