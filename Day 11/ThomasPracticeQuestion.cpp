// Rashida Thomas
// ET 575
// Practice Problem
// March 5, 2020
#include <iostream>
#include <iomanip>
#include <string>     // include the string library to use string variables
using namespace std;

int main()
{

//******************TASK******************************************************
//  Request an integer value x greater than 10 from the console. Use a while
// loop to repeatedly request a new value until it is greater than 10.

string abc = "";
for (int index = 0; index <=25; index++)
  {
    if (index % 2 ==0)
      abc = abc + static_cast<char>(65+index);
        else
         abc = abc +  static_cast<char>(97 + index);
  }

    cout << abc << endl;

    cout << endl << endl;

    string abc2= "";

    for (int index =25; index>=0; index--)

    {
      abc2= abc2 +abc[index];
    }

    cout << abc2 << endl;


    return 0;
}
