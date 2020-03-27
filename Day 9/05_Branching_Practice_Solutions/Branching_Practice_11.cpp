// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

int main( ) {
    cout << endl;

    bool isRaining;
    int activity;

    cout << "Is it raining (1/0)? ";
    cin >> isRaining;

    if(isRaining) { // this is equivalent to if(isRaining == true)
        cout << "1) Watch TV." << endl;
        cout << "2) Do homework." << endl;
        cout << "Select: ";
        cin >> activity;
        cout << endl;

        if(activity == 1)
            cout << "You turn on the TV." << endl;
        else
            cout << "You start your homework." << endl;
    }
    else {
        cout << "1) Hit the beach." << endl;
        cout << "2) Attend a museum opening." << endl;
        cout << "Select: ";
        cin >> activity;


        if(activity == 1)
            cout << "You head to the beach." << endl;
        else
            cout << "You head to the museum." << endl;
    }

    cout << endl;
    return 0;
}
