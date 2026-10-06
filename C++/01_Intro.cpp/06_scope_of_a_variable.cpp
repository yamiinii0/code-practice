// A local bvariable is declared inside a function or block and can only be accessed within that function or block.

// A global variable is declared outside of all functions and can be accessed from any part of the program.




#include <iostream>
using namespace std;

int x=20;  // global variable

int main(){
    int y=2;  // local variable
    
    

    cout << "Value of x: " << x << endl;
    cout << "Value of y: " << y << endl;
}


// if no value is assigned local variable garbage value le lega and global variable 0 lelega by default.
// local variable is given more priority than global variable if they have same name.