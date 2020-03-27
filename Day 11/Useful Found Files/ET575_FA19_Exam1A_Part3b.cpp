#include <iostream>
#include <time.h>
using namespace std;

int main() {
    cout << endl;

    srand(time(NULL));

    int x;
    cout << "Guess a number between 1 and 5 inclusive: ";
    cin >> x;

    int number = rand()%5+1;

    if(x==number) {
        cout << "You won!" << endl;
    } else {
        cout << "You lost!" << endl;
    }

    cout << endl;
    return 0;
}
