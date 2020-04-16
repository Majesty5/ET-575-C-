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
  if (num <=100 || num >=100000)
  do {

  {
    cout << " Follow the rules friend! " << endl << " Please input any odd integer value between 100 and 100,000 : ";
  }
  cin>> num;
  } while (num <=100 || num >=100000);

  outputStars(num);    //Function Call

  return 0;
}

void outputStars(int n)   //Function Defintion
{

      // cout << n%10;
    // outputStars(n/10);
    // cout << n%10 <<endl;
    // if(n<10) {
    //     cout << n << " * ";
    // }
    // if (n<10){
    //     outputStars(n/10);
    //     for (int i=1; i<=n%10; i++){
    //       // n%10
    //     cout << " * ";
    //      }



         if (n!=0){
             outputStars(n/10);
             for (int i=1; i<=n/10; i++){
               // n%10
             cout << " * ";
              }
              cout << endl;

              //This version is the only one of my attempts to print stars. I know that there is something missing.

              // ********** I am very unclear on how to use return within a function recursive or otherwise. Void function type is used when the program is not supposed to return a value.
              // Function Defintion is quite difficult as well as translating the logic into code is confusing (see my many varied attempts both above and below.)

        // cout << n%10 << " * ";

   // cout << n%10 << " * " <<endl;

    // else {


  // cout << "*" << endl;
  //
  // if
  // (n)
}
}
