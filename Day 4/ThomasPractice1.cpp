// Rashida Thomas
// ET 575
// Practice Problem 1
// February 6, 2020
#include <iostream>
#include <string>     // include the string library to use string variables
using namespace std;

int main()
{

  //TASK:
  // a.Initialize a string variable with the text "this isQCC!".
  // b. Output this string to console.
  // c. Use multiple string functions to modify and output the string in steps to match the below output.

  // Original Phrase
  string school = "this isQCC!";
  cout << school << endl << endl;
  // Insert a space into the phrase between s and Q
  school.insert (7, " ");
  cout << school << endl << endl;
  // Insert a capital T into the phrase in the 0 index position replacing the t
  school.replace(0, 1, "T");
  cout << school << endl << endl;

  //Remove the exclamation point from the end of the phrase
  school.erase(11, 1);
  cout << school << endl << endl;

  // Remove  QCC from phrase, Insert City University of New York
  school.replace(8, 3, " City University of New York");
  cout << school << endl << endl;

 // Add period to the end of the phrase
   school.append(".");
  cout << school << endl << endl;




    return 0;
}
