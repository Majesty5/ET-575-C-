// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    bool isGoingToTheMovies;
    bool isGoingToDinner;

    cout << "Do you wish to go to the movies (1/0)? ";
    cin >> isGoingToTheMovies;

    cout << "Do you wish to go to dinner (1/0)? ";
    cin >> isGoingToDinner;

    cout << endl;

    if(isGoingToTheMovies && isGoingToDinner)
        cout << "You cannot do both!" << endl;
    else if(!isGoingToTheMovies && !isGoingToDinner)
        cout << "You must do something!" << endl;
    else if (isGoingToTheMovies)
        cout << "You are going to the movies." << endl;
    else
        cout << "You are going to dinner." << endl;

    cout << endl;
    return 0;
}
