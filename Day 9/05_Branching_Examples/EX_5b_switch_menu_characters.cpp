// (c) 2018 S. Trowbridge
// Ex 5b - switch menu with characters

#include <iostream>
#include <string>
using namespace std;

int main()
{
    char day;

    cout << "Work Schedule" << endl;
    cout << "-------------" << endl;
    cout << "Select the day you wish to work:\n" << endl;
    cout << "M) Monday" << endl;
    cout << "T) Tuesday" << endl;
    cout << "W) Wednesday" << endl;
    cout << "T) Thursday" << endl;
    cout << "F) Friday" << endl;
    cout << "\nSelect Number> ";
    cin >> day;
    cout << endl;

    // Convert any lower case letters to uppercase.
    if(static_cast<int>(day) >  97)
        day = static_cast<char>(static_cast<int>(day)-32);

    // Day is an integer.
    switch(day)
    {
        case 'M':   // If the person picked Monday, or option 'M'.
            cout << "You will work on Monday.";
            break;
        case 'T':   // If the person picked Tuesday, or option 'T'. etc..
            cout << "You will work on Tuesday.";
            break;
        case 'W':
            cout << "You will work on Wednesday.";
            break;
        case 'H':
            cout << "You will work on Thursday.";
            break;
        case 'F':
            cout << "You will work on Friday.";
            break;
        default:   // If the person did not pick an appropriate option.
            cout << "You did not select an available day.";
    }

    cout << endl;
    return 0;
}
