#include <iostream>
using namespace std;

int main() {

    char Mychar;
    cout << "Enter  a character ="<< endl;
    cin >> Mychar;

    while(Mychar == 'x'){
        cout << "I am a programmer "<< endl << "Enter another character" << endl;
        cin >> Mychar;
    }

    return 0;
}