// Rashida Thomas
// ET 575
// Practice Problem 1
// February 11, 2020
#include <iostream>
#include <string>     // include the string library to use string variables
using namespace std;

int main()
{

  //TASK:
//   Create a program that produces the output below. Use a different and
// appropriate variable type to accept input for each question.
// Line and character spacing should be identical to the output example.

// Output Example
//  What is your name? Joe
//  What is your gender (M/F)? M
//  What is your age? 22
//  Is today a Friday (1/0)? 1
//  What is your GPA? 2.5

//  You answered:
//  Joe, M, 22, 1, 2.5

string name;
char gender;
int age;
string day;
float avg;

// Getline used for phrase input (spaces allowed).
cout << "What is your name? " << endl << endl;
cin >> name;
cout << "Enter M for male or F for female ";
cin >> gender;
cout << "How old are you? ";
cin >> age;
cout << "What day is it? ";
cin >> day;
cout << "What is your GPA? ";
cin >> avg;
cout << endl << endl;

cout << "Here are your answers: " << endl << endl;
cout << name << ", " << gender << ", "<< age << ", "<< day << ", " << avg << endl << endl;
// getline(cin, name);
// cout << name << endl << endl;

// Cin used for word input (spaces not allowed).
// // Any text after a white space will be ignored by this cin.
// cout << "Enter your full name: ";
// cin >> name;
// cout << "Truncated input: " << name << endl << endl;



    return 0;
}
