// Rashida Thomas
// ET 575
// Practice Test
// Problem # 3
// Due March 23, 2020

#include <iostream>
#include <iomanip>
#include <string>     // include the string library to use string variables
using namespace std;

//**************TASK*********************
/* Create a function, named calcCircle that will pass a float value of radius that will output the Circumference and Area of a Circle.   The equation of the circumference of a circle is :
Circumference = 2 * radius * Pi  (Pi = 3.142758.
Area = Pi * radius ** 2   (radius squared).
.*/

void calcCircle(float r)
{
  if (r>0) {
    calcCircle (2*r*3.142758);  //Runs digits asscending
    cout << r <<endl << endl;
      // countDown (n-1);  //Runs digits descending

  }
}



int main()
{

  int r;

  cout << " Enter a positive value:    " ;
  cin>> r;
  calcCircle(r);

      return 0;
}
