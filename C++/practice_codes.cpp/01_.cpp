// swap variable using 3rd variable

#include <iostream>
using namespace std;

int main(){
    int a = 4, b = 11 , temp;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    temp = a; // temp = 4
    a = b;    // a = 11 
    b = temp; // b = 4
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
}