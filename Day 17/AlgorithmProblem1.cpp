// Rashida Thomas
// ET 575
// Week 10 Functions 2
// Algorithm Problem # 1
//Classwork April 2, 2020

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/* Task:
1.  1. Request a positive integer from the console.
Create a function sums() with an integer parameter n.
This function computes and prints the summation of all values from 1 to n inclusive.
Call this function with various input values.
Output Example
Enter a positive integer: 10
1 3 6 10 15 21 28 36 45
*/
void sums(int n){             //Function Declaration & Definition
int sums=0;
  for (int i=1; i<=n; i++){
    // cout << i+n << endl; //1st Attempt
sums+=i; //Expressions week 4 Review
    cout << sums << endl;
}
}
int main(){

  int n;
  cout << " Please enter any integer: " << endl;
  cin >> n;


  cout << "You chose = " <<n << endl;
  cout << endl;

  cout << "******" << " Abracadabra " << "******" << endl;

  sums (n); //Function Call

  // cout << "Your sums " << x << endl;
  // cout << "y = " << y << endl;

return 0;
}
// void sums(int n);
// int n;
// for (int i=1; i<=n; i++){
//   cout << i+n << endl;
// }
