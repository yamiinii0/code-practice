// scope of a variable

// local variable: A variable declared inside a function or block is called a local variable. It can only be accessed within that function or block.
// ya jo varible hume if-else ke andar ya functions ke andar define krdiye toh bahar accessible nai hote.

// global variable: A variable declared outside of all functions is called a global variable. It can be accessed from any function in the program.
// ya jo variable hume function ke bahar define krdiye toh woh har function ke andar accessible hote h.


#include <iostream>
using namespace std;

int global_variable = 10; // global variable

void function() {
    int local_variable = 20; // local variable
    cout << global_variable << endl; // accessible
    cout << local_variable << endl; // accessible
}

int main() {
    function();
    cout << global_variable << endl; // accessible
    // cout << local_variable << endl; // not accessible, will cause an error
    return 0;
}