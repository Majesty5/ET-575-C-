/* Rashida Thomas
   ET 575
   Week 8 Recursion (Functions I)
   Problem # 1
   Homework Due March 30, 2020

***** TASK*****
1. Request an integer from 100 to 100,000 from the console.
a) Implement a void recursive function outputStars which:
    1) accepts an integer as input
    2) extracts each digit of the integer in normal order
    3) outputs a row of stars equal to the value of each digit
    Example Output (input in bolditalics)
    Enter a number: 52347
    *****
    **
    ***
    ****
    *******
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void outputStars(int n); // Function Declaration

int main ()

{
  int num;
  cout << "Enter any number from 100 to 100,000" << endl;
  cin>> num;
  do {
  // if (num <=100 || num >=100000)
  {
    cout << " Follow the rules friend! " << endl << " Please input any number whose value is between 100 and 100,000 : ";
  }
  cin>> num;
  } while (num <=100 || num >=100000);

    cout << " * " << outputStars(num);    //Function Call

  return 0;
}

void outputStars(int n)   //Function Defintion
{
  if (num >=100 || num <=100000)
  return;
  outputStars(num);
  cout << " * " << outputStars(num);


  /*  if(n<10) {
        cout << n << " * ";
    }
    else {
        outputStars(n/10);
        for (int i=1; i<=n%10; i++){
          // n%10
        cout << " * ";
      } */

         // cout << n%10;
       // outputStars(n/10);
       // cout << n%10 <<endl;
        // cout << n%10 << " * ";

   // cout << n%10 << " * " <<endl;

    // else {


  // cout << "*" << endl;
  //
  // if
  // (n)
}
}
