// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

// indexing practice (for up and coming arrays)

int getFirstIndex(string s, char c) {
    for(int i=0; i<s.length(); ++i) {
        if(c == s[i]) {
            return i;
        }
    }
    return -1;
}

int main(void) {
    cout << endl;

    char letter;
    string word;
    cout << "Enter a word and a letter: ";
    cin >> word >> letter;

    cout << getFirstIndex(word, letter) << endl;

    cout << endl;
    return 0;
}
