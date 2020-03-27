// Rashida Thomas
// March 26, 2020
// ET 575
// Midterm #2


/*
Q3.  Create a function, named calcRectangle, that will have 2 parameters that are float values of length and width. The function will output the Perimeter and Area of a Rectangle.
The procedure will also output where the dimensions passed represent a square
 (length == width) or a rectangle.
The equation of the perimeter of a rectangle is :
Perimeter = 2 * (length + width).
Area = length * width.

Example:
Enter the length and width of the Rectangle/Square > 5 9
The Perimeter is = 28.
The Area is 45.
The polygon is a Rectangle.

Enter the length and width of the Rectangle/Square > 5 5
The Perimeter is = 20.
The Area is 25.
The polygon is a Square.
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void calcRectangle (float length, float width);
int main()
{
    void calcRectangle (float length, float width);
    cout << " Enter two values (length, width): ";
    cin >> length, width;
    return 0;
}
void calcRectangle (float length, float width);
cout << " Enter two values (length, width): ";
cin >> length, width;
cout << " The perimeter is = "<< length*width << "." << endl;
cout << " The area is = " << 2 * (length + width) <<"." << endl;
if (length == width);
cout << " The polygon is a square. ";
else cout << " The polygon is a rectangle. ";
