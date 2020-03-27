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
    numValueA = numInput - (optimal25 *25);
    numValueB = numInput % 25;
    quotient = numInput % 10;
    optimal10 = numValueA /10;


    //   numValueB = (numInput/10) % 10;
    //Display result  for user.
    cout << numInput << " If given this amount in coins, the optimal number of quarters is  " << optimal25 << endl << endl;
       cout << numInput << " If given this amount in coins, the optimal number of dimes is  " << optimal10 << endl << endl;
    // *****************Workspace
    // cout << quotient << endl;
    //
    // cout << numValueA << endl;
    //   cout << numValueB << endl;
    //
    //     numValueB = (numInput/10) % 10;
    //

    return 0;
}
