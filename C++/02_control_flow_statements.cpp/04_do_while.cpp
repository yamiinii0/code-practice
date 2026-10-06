// syntax  -->

#include <iostream> 
using namespace std;

int main()
{
    int i = 1; // initialization

    // do
    // {
    //     // code to be executed
    //     increment/decrement
    // } while (condition);

    // print numbers from 1 to 10 using do-while loop
    do
    {
        cout << i << " ";
        i++; // increment
    } while (i <= 10); // condition

    cout << endl;

    return 0;
}


// also known as exit controlled loop because the condition is checked at the end of the loop body. 
//Hence, the loop body is executed at least once, even if the condition is false.