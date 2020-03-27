// (c) 2018 S. Trowbridge
// Ex 1g - string functions

#include <iostream>
#include <string>
using namespace std;

int main( ) {
    string name = "John Smith";
    cout << "Original name: " << name << endl << endl;

    // Insert a middle name.
    name.insert(5, "Jay ");
    cout << "Inserted middle name: " << name << endl << endl;

    // Append the "Jr." suffix to the string.
    name.append(" Jr.");
    cout << "Appended suffix: " << name << endl << endl;

    // Replace the middle name.
    name.replace(5, 3, "Joseph");
    cout << "Replaced middle name: " << name << endl << endl;

    // Remove the middle name.
    name.erase(5, 7);
    cout << "Removed middle name: " << name << endl << endl;

    // Find the location of the first occurence of the string "oh".
    cout << "Location of the string \"oh\": " << name.find("hn") << endl;
	cout << "Location of the string \"J\": " << name.find("J") << endl;
	cout << "Location of the string \"Z\": " << name.find("Z") << endl;
  std::size_t found = name.find("Z");
  if (found ==std::string::npos)
    cout << "String Not found" << endl;

    int pos1 = name.find(" ");
    int len1 = name.length();
    string name2 = name.substr(pos1+1,len1-(pos1+1));
    string name2 = name2.find(" ");
    pos2 = pos1 + pos2;

    cout << name << endl;
    cout << name2 << endl;
    cout << pos1 << " " << pos2 <<endl;
    pos2 = pos1 + 1 + pos2;
    cout << pos1 << " " << pos2 << endl;

    return 0;
}
