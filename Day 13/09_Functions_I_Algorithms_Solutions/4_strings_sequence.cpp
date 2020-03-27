// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

// indexing practice (for up and coming arrays)
void validate(string str) {
    if('a'<=str[0] && str[0]<='z') {
        cout << str << " Invalid" << endl;
        return;
    }
    for(int i=1; i<str.length()-1; ++i) {
        if('a'<=str[i] && str[i]<='z') {
            if( (str[i-1] != '!') || (str[i+1] != '!') ) {
                cout << str << " Invalid" << endl;
                return;
            }
        }
    }
    cout << str << " Valid" << endl;
}

int main() {
  cout << endl;

  validate("d!==!e!f");
  validate("!d===!a!");
  validate("!a=");
  validate("a!!");

  validate("!d!=!e!");
  validate("!f!!!==!f");
  validate("2!a!a!");
  validate("!e!a!");

  cout << endl;
  return 0;

}
