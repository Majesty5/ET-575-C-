// Rashida Thomas
// Homework # 4 ET 575
// Expressions
// Problem 2
// Due: February 24, 2020
#include <iostream>
using namespace std;

int main()
{

//*******************************TASK*************************************
              // 1. Request a dolalr amount as an integer from thr console.
              //If one were to convert this dollar amoount into the smallest number of coins, how many dimes would there be?
              // Use division and modulo operations to code a solution for this problem given any dollar amount as an input.

// Modulo******************************************************


        int numInput;
        int numValueA;
        int numValueB;
        int numValueC;
        int numFactorA;
        int numFactorB;
        int quotient;
        int optimal25;
        int optimal10;
        bool factorA;
        bool factorB;
        bool factorC;


    // Request a three digit number from the user.
    cout << "Input a dollar amount without a decimal, (ex: 2.99 as 299)  " << endl << endl;
    // Store the console input into a variable.
    cin >> numInput;

    optimal25 = (numInput / 25) ; // This is the least number of quarters
    quotient = numInput % 25;
    optimal10 = numInput % 25;


    //   numValueB = (numInput/10) % 10;
    //Display result  for user.
    cout << numInput << " If given this amount in coins, the optimal number of quarters is  " << optimal25 << endl << endl;
    cout << quotient << endl;
     cout << numInput << " If given this amount in coins, the optimal number of dimes is  " << optimal10 << endl << endl;
    //
    //
    //     numValueB = (numInput/10) % 10;
    //
    // cout << "The number in the tens place of " << numInput << " is " <<numValueB << endl << endl;
    //
    // //Is this value a Factor?
    //
    // factorB = numInput % numValueB == 0 ;
    //
    // cout << "Is " << numValueB << " a factor of " << numInput << " ? " << factorB  << endl << endl;
    //
    // numValueC = (numInput/100) % 10;
    //
    // cout << "The number in the hundreds place of " << numInput << " is " <<numValueC << endl << endl;
    //
    // //Is this value a Factor?
    //
    // factorC = numInput % numValueC == 0 ;
    //
    // cout << "Is " << numValueC << " a factor of " << numInput << " ? " << factorC  << endl << endl;



    return 0;
}
