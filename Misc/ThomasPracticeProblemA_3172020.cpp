// Rashida Thomas
// March 17, 2020
// ET 575
// CPP Functions
// Practice Problem

#include <iostream>
#include <iomanip>
#include <string>     // include the string library to use string variables
using namespace std;

//**************TASK*********************
/* function 1    String Function that cins a first name
function 2    String function that has a input parameter of firstname and cins a last name and
concatenates the first " " last name returning the full namespace*/

string first ()
{
  string f;
  cout << " What's your first name" << endl;
  cin >>f;
  return f;
}

string last (string f)
{
string l;
  cout << " What's your last name" << endl;
  cin >>l;
  l= f + " " + l;

  return l;
}

int main()
{
  string fname=first();
  string lname=last(fname);

    cout <<" Howdy "<< lname << endl;

// first()
// last()
    return 0;
}
