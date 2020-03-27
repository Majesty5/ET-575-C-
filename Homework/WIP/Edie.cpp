
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
  /* Task:
  1. Request an integer from the console.
  2. Input should be validated until it is between 1 and 100,000 inclusive.
  3. Output the sum of all digits in the input value*/

  int surprise;
  int sum=0;
  int c;


  cout << "Input any number from 1 through 100,000" << endl;
  cin >> surprise;

  while(!(surprise>=1 && surprise<=100000))
  { cout << "Follow the rules friend! " << endl << " Please input any number from 1 through 100,000" << endl;
  cin >> surprise;
  }

  while (surprise>=1&& surprise<=100000)
        {sum += surprise%10;
          surprise/=10;
          // surprise= surprise/10;
           // c=surprise % 10;
        }


    cout << sum;

  return 0;
}
