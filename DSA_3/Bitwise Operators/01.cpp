// Bitwise Operators

// [&] Bitwise AND --> Returns 1 if both bits are 1, otherwise 0
// [|] Bitwise OR --> Returns 1 if at least one bit is 1, otherwise 0
// [^] Bitwise XOR --> Returns 1 if bits are different, otherwise 0
// [~] Bitwise NOT --> Flips all bits
// [<<] Left Shift --> Shifts bits to the left
// [>>] Right Shift --> Shifts bits to the right      

#include <iostream>
using namespace std;

int main(){
    int a = 5, b = 3; // Binary representation: a = 0101, b = 0011
    cout << "Bitwise AND: " << (a & b) << endl; // Output: 1 (0001)
    cout << "Bitwise OR: " << (a | b) << endl;  // Output: 7 (0111)
    cout << "Bitwise XOR: " << (a ^ b) << endl; // Output: 6 (0110)
    cout << "Bitwise NOT a: " << (~a) << endl;  // Output: -6 (11111010)  working --> -6 is the two's complement representation of 6 in 8 bits
    cout << "Left Shift a by 2: " << (a << 2) << endl;  // Output: 20 (10100)  a<<b = a*(2^b)  --> 5*(2^2) = 5*4 = 20
    cout << "Right Shift a by 2: " << (a >> 2) << endl;  // Output: 1 (0001)  a>>b = a/(2^b)  --> 5/(2^2) = 5/4 = 1
}