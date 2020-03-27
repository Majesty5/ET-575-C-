// s. trowbridge 2019
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    char c;
    int i;

    // step 1: request an uppercase letter from the console, store in c
    cout << "Input an lowercase character: ";
    cin >> c;

    // step 2: c-32:
    //         Implicitly convert the char c to an integer, then subtract 32.
    //         This expression resolves to the ascii integer equivalent of uppercase c.
    // step 3: c=(the ascii integer value of uppercase c):
    //         The assignment operation implicitly converts the ASCII integer value
    //         of uppercase c into a character, which is then stored back into c.
    c = c-32;

    // step 5: output the converted char c
    cout << "The uppercase equivalent is '" << c << "'." << endl;

    cout << endl;
    return 0;
}
