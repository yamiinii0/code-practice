// Logical Operator -->  Logical operators are used to combine or check conditions (true/false) in a program.


#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 10;

    cout << "a > b: " << (a > b) << endl;   // Greater than
    cout << "a < b: " << (a < b) << endl;   // Less than
    cout << "a == b: " << (a == b) << endl; // Equal to
    cout << "a != b: " << (a != b) << endl; // Not equal to
    cout << "(a > 0) && (b > 0): " << ((a > 0) && (b > 0)) << endl; // Logical AND
    cout << "(a > 0) || (b > 0): " << ((a > 0) || (b > 0)) << endl; // Logical OR
    cout << "!(a > 0): " << (!(a > 0)) << endl; // Logical NOT

     return 0;
}