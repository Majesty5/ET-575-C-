// Rashida Thomas
// March 26, 2020
// ET 575
// Midterm #2


/*
Q4 .  Write the Loop Statement that will only display the numbers from 1 to 100 that have the  factors of both 8  and 12

Output:

24 48 72 96

*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int i;
int main()
{

  for (int i=1; i <=100; i++)
  if (i%8==0 || i%12==0);
    cout << i << endl;

    return 0;
}
