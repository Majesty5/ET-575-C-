
// Rashida Thomas
// Quiz A ET 575
// February 6, 2020
#include <iostream>
#include <string>     // include the string library to use string variables
using namespace std;

int main()
{

// TAsk: Implement a program that manipulates strings.

    string assassin = "John W. Booth" ;         // declare a string variable named assassin

        // Initialize a string variable with the name "John W. Booth".

        //Solution 1: Index method (local use)

    cout << assassin[5] << endl << endl;

        //Solution 2: Global use can be applied across different varibles of multiple lenghts if they have the first name space middle initial convention
        int pos1=assassin.find(" ");
        cout << assassin.at(pos1 +1) << endl;



    return 0;
}
