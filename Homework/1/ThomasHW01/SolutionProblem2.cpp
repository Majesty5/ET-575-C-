// Rashida Thomas
// Homework # 1 ET 575
// Problem 2
// Due: February 3, 2020
#include <iostream>
#include <iomanip>
using namespace std;
 int main(){

   cout <<left<< setw(5)<<"Shopping"<< " "<< "Cart" << endl;
   cout <<left<< setw(25)<<"--------------------------------" << endl;
   cout <<left<< setw(5)<<"#"<< "Item" <<right<< setw(20)<< "Cost" << endl;
   cout << "\n" << endl;
   cout <<left<< setw(5)<<"1"<< "Chalupa" <<right<< setw(18)<< "$1.50" << endl;
   cout <<left<< setw(5)<<"2"<< "Soft Taco Supreme" <<right<< setw(8)<< "$1.00" << endl;
   cout <<left<< setw(5)<<"1"<< "Meximelt" <<right<< setw(17)<< "$2.50" << endl;
   cout <<"     " <<left<< setw(8)<<"Subtotal:" <<right<< setw(16)<< "$5.00"<<endl;
   
  return 0;
}
