// Homework

#include <iostream>
using namespace std;

int main(){
    int a =6, b = 10;

    cout << "Bitwise AND: " << (a & b) << endl; // Output: 2 (0010)
    cout << "Bitwise OR: " << (a | b) << endl;  // Output: 14 (1110)
    cout << "Bitwise XOR: " << (a ^ b) << endl; // Output: 12 (1100)

    cout << "Bitwise left shift"<<(10<<2)<<endl; // Output: 40 (101000) 10*(2^2) = 10*4 = 40
    cout << "Bitwise right shift"<<(10>>1)<<endl; // Output: 5 (0101) 10/(2^1) = 10/2 = 5
}