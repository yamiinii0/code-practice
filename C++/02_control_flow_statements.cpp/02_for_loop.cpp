// syntax -->

#include <iostream>
using namespace std;

int main()
{
    // for loop syntax -->
    // for (initialization; condition; increment/decrement)
    // {
    //     // code to be executed
    // }

    // print numbers from 1 to 10 using for loop
    
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}


// also known as entry controlled loop because the condition is checked before executing the loop body.
// If the condition is false at the beginning, the loop body will not execute at all.