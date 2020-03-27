#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
// cout << "                   Columns   " << endl;;
// cout << setw(10) << right << "Rows";
for (int col = 1; col <= 9; col++) //neighbor loop
    {
        cout << setw(10) << right << col;
    }
// cout << endl;

// for (int row = 1; row <= 4; row++)
//     {
//     cout << setw(10) << right << row;
//     for (int col = 1; col <=9; col++)
//         {
//         cout << setw(10) << right << (row*10)+col;
//         }
//     cout << endl;
//     }

cout <<endl;


return 0;

}
