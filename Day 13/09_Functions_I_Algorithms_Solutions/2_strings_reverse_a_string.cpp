// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

// indexing practice (for up and coming arrays)

// step 1: Iterate through the string from element 0 to the middle of the string.
//         step a: swap the current element with its mirror element (s[i] swaps with s[last-i])
// step 2: return the modified string
string reverse(string s) {
    int len = s.length();           // Determine the string length
    for(int i=0; i<(len/2); ++i) {  // Iterate from start to middle of string (length/2)
        char temp = s[i];           // Backup current element
        s[i] = s[len-i-1];          // Replace current element with its mirror element
        s[len-i-1] = temp;          // Replace mirror element with original current element
    }
    return s;
}

int main(void) {
    cout << endl;

    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << reverse(str) << endl;

    cout << endl;
    return 0;
}
