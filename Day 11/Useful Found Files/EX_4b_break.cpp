// (c) 2018 S. Trowbridge
// Ex 4b - break

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Break Statement" << endl;
    cout << "---------------" << endl;

    cout << "While Loop:" << endl;
    // While loop that counts to 10.
    // The condition of this loop would normally generate an endless loop,
    // however we can force the loop to terminate at a certain point
    // by using the break command.
    int count = 0;
    while(true) { // a true condition creates an endless loop
      cout << count << " ";
      count++; // increment the count variable
      if(count > 10)
        break; // exit the loop once we have iterated 10 times (check count value)
    }
    cout << endl << endl;

    cout << "For Loop:" << endl;
    // For loop is coded to repeat 10 times, but the code inside the Loop
    // causes is to terminate early when i becomes equivalent to 5.
    for(int i=0; i < 10; i++) {
        cout << i << " ";
        if(i == 5)
            break; // exit the loop when iteration variable reaches 5 (early termination)
    }

    cout << endl;
    return 0;
}
