// Rashida Thomas
// Homework # 4 ET 575
// Expressions
// Problem 1
// Due: February 24, 2020
#include <iostream>
using namespace std;

int main()
{

//*******************************TASK*************************************
              // 1. Request a 3-digit integer from thr console.
              // Use division and modulo operations to extract each digit in reverse order.
              // For each digit, determine if it is a factor of the original integer.
// Modulo******************************************************


        int numInput;
        int numValueA;
        int numValueB;
        int numValueC;
        int numFactorA;
        int numFactorB;
        int numFactorC;
        bool factorA;
        bool factorB;
        bool factorC;


    // Request a three digit number from the user.
    cout << "Input any three digit number " << endl << endl;
    // Store the console input into a variable.
    cin >> numInput;
    //Display input for user.
    cout << numInput << " is a great selection " << endl << endl;

    numValueA = numInput % 10;

    cout << "The number in the ones place of " << numInput << " is " <<numValueA << endl << endl;

    factorA = numInput % numValueA == 0;

    cout << "Is " << numValueA << " a factor of " << numInput << " ? " << factorA  << endl << endl;

        numValueB = (numInput/10) % 10;

    cout << "The number in the tens place of " << numInput << " is " <<numValueB << endl << endl;

    //Is this value a Factor?

    factorB = numInput % numValueB == 0 ;

    cout << "Is " << numValueB << " a factor of " << numInput << " ? " << factorB  << endl << endl;

    numValueC = (numInput/100) % 10;

    cout << "The number in the hundreds place of " << numInput << " is " <<numValueC << endl << endl;

    //Is this value a Factor?

    factorC = numInput % numValueC == 0 ;

    cout << "Is " << numValueC << " a factor of " << numInput << " ? " << factorC  << endl << endl;

    //Factors -mif there is a remainder, the divisor is not a factor of the dividend
    //***************** This space represents the errors I made en route to the correct solution.*******************
    //   ( numInput > 0 );
    //       if( numInput%numValueA == 0 );
    // numFactorA = numInput/numValueA;
    // cout << numFactorA << "is a factor of " << numInput << endl;
    //
    // factorA = numValueA % numInput == 0;
    //
    // cout << numFactorA << "is a factor of " << numInput << "because " << factorA << endl;

    // while( testNumber > 0 );
    // {
    // if( number%testNumber == 0 )
    // {
    // factor = number/testNumber;
    // cout << factor << "is a factor\n";
    // }

    //End Factors TEST
        // cout << " Let's look at the factors " << endl << endl;
    //
    // bool factorA = numValueA % numInput == 0; // This is incorrect because the dividend and divisor are not in the proper order


    //cout << numValueA = numInput / 10; << endl << endl;

    //cout << "is " << numValueA << " a factor of " << numInput << " ? " << factorA <<  endl;


    return 0;
}
