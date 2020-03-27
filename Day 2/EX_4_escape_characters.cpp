// (c) 2018 S. Trowbridge
// Ex 4 - Escape Characters

#include <iostream>
using namespace std;

int main()
{
    // Using the endl command to terminate a line.
    cout << "This uses an endl command to terminate the line.";
    cout << endl;               // inserts a blank line

    // Using the newline character '\n' to terminate a line.
    cout << "This uses a newline escape sequence to terminate the line.\n";

    // Combining the newline character '\n' and endl command.
    cout << "Combining the newline character and endl command\n";
    cout << endl;


    // Tab escape character '\t'
    cout << "\tIndenting using a single tab escape character." << endl;
    cout << endl << endl;       // insert two blank lines

    // Multiple tab escape characters 't\'
    cout << "\t\tIndenting using multiple tab escape characters." << endl;
    cout << "\n\n";            // insert two blank lines

    // Combining escape characters into a string literal.
    cout << "Hello\tWorld\n";
    cout << endl << endl;

    return 0;
}
