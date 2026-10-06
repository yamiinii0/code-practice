// pointer -->  A pointer is a variable that stores the memory address of another variable.

#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int *p = &a;  // gonna store the address of a in p
    cout << a << endl;
    cout << &a << endl;  // hexadecimal address of a
    cout << p << endl;  // address of a is stored in p
    cout << *p << endl; // dereferencing the pointer to get the value of a
}

// & is an operator known as the "address of" operator, which is used to get the memory address of a variable.
// In this case, &a gives us the memory address of the variable a.