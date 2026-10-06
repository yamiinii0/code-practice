/* bitwise operator  --> They work on individual bits (0s and 1s) of numbers.*/

#include <iostream>
using namespace std;

int main()
{
    int a = 5;  // In binary: 0000 0101
    int b = 3;  // In binary: 0000 0011

    cout << "a & b = " << (a & b) << endl; // Bitwise AND
    cout << "a | b = " << (a | b) << endl; // Bitwise OR
    cout << "a ^ b = " << (a ^ b) << endl; // Bitwise XOR
    cout << "~a = " << (~a) << endl;        // Bitwise NOT
    cout << "a << 1 = " << (a << 1) << endl; // Left shift
    cout << "b >> 1 = " << (b >> 1) << endl; // Right shift

    return 0;
}

