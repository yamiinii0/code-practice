// swap without using 3rd variable

#include <iostream>
using namespace std;

int main(){
    int a = 4, b = 11;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    a = a + b; // a = 15
    b = a - b; // b = 4
    a = a - b; // a = 11
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
}

// logic behind this code is as follows:
// a = 4, b = 11
// a = a + b => a = 4 + 11 => a = 15
// b = a - b => b = 15 - 11 => b = 4    
// a = a - b => a = 15 - 4 => a = 11