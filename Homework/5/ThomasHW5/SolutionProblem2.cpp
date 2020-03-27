// Rashida Thomas
// ET 575
// Week 5 Branching
// Homework Due March 2, 2020

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
  /* Task:
  1. Request a character from the console.
  2. Use an if/else to output if the character is an uppercase letter, a lowercase letter or neither a letter nor a number.*/

  char z;



  cout << "Input a character " << endl;
  cin >> z;

  if(z >=58 && z <= 64) // If z is between 58 and 64, then cout and end.
          {cout << z << " is not a number or a letter." << endl;}
          if(z >=32 && z <= 47) // If z is between 32 and 47, then cout and end.
                  {cout << z << " is not a number or a letter." << endl;}
                  if(z >=91 && z <= 96) // If z is between 91 and 96, then cout and end.
                          {cout << z << " is not a number or a letter." << endl;}
                          if(z >=123 && z <= 126) // If z is between 123 and 126, then cout and end.
                                  {cout << z << " is not a number or a letter." << endl;}

  else if(z >= 65 && z <= 90) // If z is greater than or equal to 65 and less than or equal to 90, then cout and end.
           {cout << z << " is an uppercase letter." << endl;}

 else if(z>=97 && z<=122) // If z is is greater than or equal to 97 and less than or equal to 122, then cout and end.
           {cout << z << " is a lowercase letter." << endl;}
  else if(z>=48 && z<=57) // If z is is greater than or equal to 48 and less than or equal to 57, then cout and end.
                     {cout << z << " is a single digit number." << endl;}
                     
cout << endl << endl; //******************Second chance in the same console.****************
              cout << "Input a character " << endl;
              cin >> z;

              if(z >=58 && z <= 64) // If z is between 58 and 64, then cout and end.
                      {cout << z << " is not a number or a letter." << endl;}
                      if(z >=32 && z <= 47) // If z is between 32 and 47, then cout and end.
                              {cout << z << " is not a number or a letter." << endl;}
                              if(z >=91 && z <= 96) // If z is between 91 and 96, then cout and end.
                                      {cout << z << " is not a number or a letter." << endl;}
                                      if(z >=123 && z <= 126) // If z is between 123 and 126, then cout and end.
                                              {cout << z << " is not a number or a letter." << endl;}

              else if(z >= 65 && z <= 90) // If z is greater than or equal to 65 and less than or equal to 90, then cout and end.
                       {cout << z << " is an uppercase letter." << endl;}

             else if(z>=97 && z<=122) // If z is is greater than or equal to 97 and less than or equal to 122, then cout and end.
                       {cout << z << " is a lowercase letter." << endl;}
              else if(z>=48 && z<=57) // If z is is greater than or equal to 48 and less than or equal to 57, then cout and end.
                                 {cout << z << " is a single digit number." << endl;}

  // else(z >= 97 || z <= 122) // If z is greater than or equal to 97 and less than or equal to 122, then cout and end.
  //         cout << z << " is a lowercase letter." << endl << endl;


//

  return 0;
}
