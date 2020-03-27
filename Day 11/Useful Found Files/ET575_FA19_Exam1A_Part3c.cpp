#include <iostream>
using namespace std;

int main() {
    cout << endl;

    string word;

    cout << "Enter a five-letter word: ";
    cin >> word;

    if(word.length() != 5) {
        cout << word << " is not five letters long." << endl;
    } else {
        if(word[0] == word[4] && word[1] == word[3]) {
            cout << word << " is a palindrome.";
        }
    }

    cout << endl;
    return 0;
}
