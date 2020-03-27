// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

// indexing practice (for up and coming arrays)
string shift(string s) {

  for(int i=0;i<s.length(); i++) {
      if( (s[i]>'a' && s[i]<='z') || (s[i]>'A' && s[i]<='Z') )
      {
          s[i]--;
          if(s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
              s[i]+='A'-'a';
          }
      } else if( s[i] == 'a' || s[i] == 'A' ) {
          s[i] = 'z';
      }
  }
  return s;

}

int main(void) {
    cout << endl;

    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << shift(str) << endl;

    cout << endl;
    return 0;

}
