// Rashida Thomas
// ET 575
// Practice Test
// Problem # 1
// Due March 23, 2020

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
  /* Task:
  Write the Loop Statements that will only display the numbers from 1 to 99 that contain a ‘7’ in it.

Output:
7  17  27  37  47  57  67 70  71 72  73  74  75  76  77 78  79  87  97

. */


for (int i = 1; i<99; i++) {
  if (i==7 || i==17 || i==27 || i==37 || i==47 || i==57 || i==67 || i<=70 && i>=79 || i==87 || i==97)

    cout << i <<endl;
}




    return 0;
}
